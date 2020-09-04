#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert(c.value >= 2 && c.value <= VALUE_ACE);
  assert(c.suit >= SPADES && c.suit <= CLUBS);
}

const char * ranking_to_string(hand_ranking_t r) {
    switch (r)
    {
        case STRAIGHT_FLUSH:
            return "STRAIGHT_FLUSH";
            break;
        case FOUR_OF_A_KIND:
            return "FOUR_OF_A_KIND";
            break;
        case FULL_HOUSE:
            return "FULL_HOUSE";
            break;
        case FLUSH:
            return "FLUSH";
            break;
        case STRAIGHT:
            return "STRAIGHT";
            break;
        case THREE_OF_A_KIND:
            return "THREE_OF_A_KIND";
            break;
        case TWO_PAIR:
            return "TWO_PAIR";
            break;
        case PAIR:
            return "PAIR";
            break;
        case NOTHING:
            return "NOTHING";
            break;
        default:
            return NULL;
            break;
    }  
}

char value_letter(card_t c) {
  switch(c.value)
  {
    case 2:
        return '2';
        break;
    case 3:
        return '3';
        break;
    case 4:
        return '4';
        break;
    case 5:
        return '5';
        break;
    case 6:
        return '6';
        break;
    case 7:
        return '7';
        break;
    case 8:
        return '8';
        break;
    case 9:
        return '9';
        break;
    case 10:
        return '0';
        break;
    case VALUE_JACK:
        return 'J';
        break;
    case VALUE_QUEEN:
        return 'Q';
        break;
    case VALUE_KING:
        return 'K';
        break;
    case VALUE_ACE:
        return 'A';
        break;
    default:
        return EXIT_FAILURE;
        break;
  }
}


char suit_letter(card_t c) {
    switch (c.suit)
    {
        case SPADES:
            return 's';
            break;
        case HEARTS:
            return 'h';
            break;
        case DIAMONDS:
            return 'd';
            break;
        case CLUBS:
            return 'c';
            break;
        case NUM_SUITS:
            return '4';
            break;
        default:
            return EXIT_FAILURE;
            break;
    }
}

void print_card(card_t c) {
  char value = value_letter(c);
  char suit = suit_letter(c);
  printf("%c%c", value,suit);
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  switch (value_let)
  {
  case '2':
      temp.value = 2;
      break;
  case '3':
      temp.value = 3;
      break;
  case '4':
      temp.value = 4;
      break;
  case '5':
      temp.value = 5;
      break;
  case '6':
      temp.value = 6;
      break;
  case '7':
      temp.value = 7;
      break;
  case '8':
      temp.value = 8;
      break;
  case '9':
      temp.value = 9;
      break;
  case '0':
      temp.value = 10;
      break;
  case 'J':
      temp.value = 11;
      break;
  case 'Q':
      temp.value = 12;
      break;
  case 'K':
      temp.value = 13;
      break;
  case 'A':
      temp.value = 14;
      break;
  }
  switch (suit_let)
  {
      case 's':
          temp.suit = SPADES;
          break;
      case 'h':
          temp.suit = HEARTS;
          break;
      case 'd':
          temp.suit = DIAMONDS;
          break;
      case 'c':
          temp.suit = CLUBS;
          break;
  }
  assert_card_valid(temp);
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  if (c <= 12)
  {
      temp.suit = SPADES;
  }
  else if (c > 12 && c <= 25)
  {
      temp.suit = HEARTS;
  }
  else if (c > 25 && c <= 38)
  {
      temp.suit = DIAMONDS;
  }
  else
  {
      temp.suit = CLUBS;
  }
  if (c % 13 == 0)
  {
      temp.value = 2;
  }
  else if (c % 13 == 1)
  {
      temp.value = 3;
  }
  else if (c % 13 == 2)
  {
      temp.value = 4;
  }
  else if (c % 13 == 3)
  {
      temp.value = 5;
  }
  else if (c % 13 == 4)
  {
      temp.value = 6;
  }
  else if (c % 13 == 5)
  {
      temp.value = 7;
  }
  else if (c % 13 == 6)
  {
      temp.value = 8;
  }
  else if (c % 13 == 7)
  {
      temp.value = 9;
  }
  else if (c % 13 == 8)
  {
      temp.value = 10;
  }
  else if (c % 13 == 9)
  {
      temp.value = VALUE_JACK;
  }
  else if (c % 13 == 10)
  {
      temp.value = VALUE_QUEEN;
  }
  else if (c % 13 == 11)
  {
      temp.value = VALUE_KING;
  }
  else if (c % 13 == 12)
  {
      temp.value = VALUE_ACE;
  }
  return temp;
}
