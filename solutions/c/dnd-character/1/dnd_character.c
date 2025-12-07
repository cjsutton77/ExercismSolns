#include "dnd_character.h"

int modifier(int score){
    return floor(((float)score - 10.) / 2.);
}

int ability(void){
    return rand() % 15 + 3;
}

dnd_character_t make_dnd_character(void){
    dnd_character_t character;
    character.strength = ability();
    character.dexterity = ability();
    character.constitution = ability();
    character.intelligence = ability();
    character.wisdom = ability();
    character.charisma = ability();
    character.hitpoints = 10 + modifier(character.constitution);
    return character;
}