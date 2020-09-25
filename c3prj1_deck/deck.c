#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "deck.h"

void print_hand(deck_t* hand)
{
    for (size_t i = 0; i < hand->n_cards; i++)
    {
        print_card(*(hand->cards[i]));
        printf(" ");
    }
}

int deck_contains(deck_t* d, card_t c)
{
    for (size_t i = 0; i < d->n_cards; i++)
    {
        if (suit_letter(*(d->cards[i])) == suit_letter(c)
            && value_letter(*(d->cards[i])) == value_letter(c))
        {
            return 1;
        }
    }
    return 0;
}

void shuffle(deck_t* d)
{
    card_t* temp = NULL;
    size_t n = d->n_cards;
    for (size_t i = n - 1; i > 0; i--)
    {
        size_t j = random() % (i + 1);
        temp = d->cards[i]; //CAGUEI AQUI POR FALTA DE ATENCAO. CLARO Q VAI DAR SIGSEGV
        d->cards[i] = d->cards[j];
        d->cards[j] = temp;
    }
}

void assert_full_deck(deck_t* d)
{
    size_t cartas_achadas = 0;
    card_t card;
    for (unsigned i = 0; i < 52; i++)
    {
        card = card_from_num(i);
        for (size_t j = 0; j < d->n_cards; j++)
        {
            if (card.suit == d->cards[j]->suit && card.value == d->cards[j]->value) //pode ser tb (*d->cards[j]).suit
            {
                cartas_achadas++;
            }
        }
        assert(cartas_achadas == 1);
        cartas_achadas = 0;
    }
}
