static const u16 sTutorMoves[TUTOR_MOVE_COUNT] =
{
    [TUTOR_MOVE_FIRE_PUNCH] = MOVE_FIRE_PUNCH, // replaced mega punch
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_THUNDERPUNCH] = MOVE_THUNDER_PUNCH, // replaced mega kick
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_KNOCK_OFF] = MOVE_KNOCK_OFF, // replaced counter
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_AVALANCHE] = MOVE_SUPERSONIC, // replaced mimic
    [TUTOR_MOVE_ICE_PUNCH] = MOVE_ICE_PUNCH, // replaced metronome
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_CHARGE_UP] = MOVE_CHARGE, // replaced thunder wave
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
};

#define TUTOR(move) (1 << (TUTOR_##move))

static const u16 sTutorLearnsets[] =
{
    [SPECIES_NONE] = 0,

    [SPECIES_BULBASAUR] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IVYSAUR] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENUSAUR] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARMANDER] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARMELEON] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARIZARD] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SQUIRTLE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WARTORTLE] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLASTOISE] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CATERPIE] = 0,

    [SPECIES_METAPOD] = 0,

    [SPECIES_BETTERFLY] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEDLE] = 0,

    [SPECIES_KAKUNA] = 0,

    [SPECIES_BEEDRILL] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEY] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEOTTO] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEOT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RATTATA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RATICATE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPEAROW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FEAROW] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EKANS] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARBOK] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIKACHU] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAICHU] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SANDSHREW] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SANDSLASH] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORAN_F] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORINA] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDOQUEEN] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORAN_M] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORINO] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDOKING] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFAIRY] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_SOFT_BOILED)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFABLE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_SOFT_BOILED)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VULPIX] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINETALES] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JIGGLYPUFF] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_CHARGE_UP)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WIGGLYTUFF] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_CHARGE_UP)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZUBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ODDISH] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLOOM] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VILEPLUME] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PARAS] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_KNOCK_OFF)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PARASECT] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENONAT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_METAMOTH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DIGLETT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUGTRIO] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEOWTH] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PERSIAN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PSYDUCK] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLDUCK] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANKEY] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PRIMEAPE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROWLITHE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARCANINE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWAG] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWHIRL] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWRATH] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ABRA] = TUTOR(MOVE_FIRE_PUNCH)
                   | TUTOR(MOVE_THUNDERPUNCH)
                   | TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_KNOCK_OFF)
                   | TUTOR(MOVE_SEISMIC_TOSS)
                   | TUTOR(MOVE_AVALANCHE)
                   | TUTOR(MOVE_ICE_PUNCH)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_CHARGE_UP)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KADABRA] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ALAKAZAM] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHOP] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHOKE] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MACHAMP] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELLSPROUT] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEPINBELL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VICTREEBEL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TENTACOOL] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TENTACRUEL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GEODUDE] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRAVELER] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLEM] = TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDERPUNCH)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_KNOCK_OFF)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_ICE_PUNCH)
                    | TUTOR(MOVE_EXPLOSION)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PONYTA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAPIDASH] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWPOKE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWBRO] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGNEMITE] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGNETON] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FARFETCHD] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DODUO] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DODRIO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEEL] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_AVALANCHE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DEWGONG] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRIMER] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MUK] = TUTOR(MOVE_BODY_SLAM)
                  | TUTOR(MOVE_AVALANCHE)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHELLDER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLOYSTER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GASTLY] = TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HAUNTER] = TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GENGAR] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ONIX] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_AVALANCHE)
                   | TUTOR(MOVE_EXPLOSION)
                   | TUTOR(MOVE_ROCK_SLIDE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DROWZEE] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HYPNO] = TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDERPUNCH)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_KNOCK_OFF)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_ICE_PUNCH)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_CHARGE_UP)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KRABBY] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KINGLER] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VOLTORB] = TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTRODE] = TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXEGGCUTE] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXEGGUTOR] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CUBONE] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAROWAK] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONLEE] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONCHAN] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_ICE_PUNCH)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LICKITUNG] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KOFFING] = TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEZING] = TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RHYHORN] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RHYDON] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHANSEY] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TANGELA] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KANGASKHAN] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HORSEA] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEADRA] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLDEEN] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEAKING] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STARYU] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STARMIE] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MR_MIME] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCYTHER] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JYNX] = TUTOR(MOVE_FIRE_PUNCH)
                   | TUTOR(MOVE_THUNDERPUNCH)
                   | TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_KNOCK_OFF)
                   | TUTOR(MOVE_SEISMIC_TOSS)
                   | TUTOR(MOVE_AVALANCHE)
                   | TUTOR(MOVE_ICE_PUNCH)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTABUZZ] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_CHARGE_UP)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGMAR] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PINSIR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAUROS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGIKARP] = 0,

    [SPECIES_GYARADOS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LAPRAS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DITTO] = 0,

    [SPECIES_EEVEE] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VAPOREON] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JOLTEON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLAREON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PORYGON] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OMANYTE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OMASTAR] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KABUTO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KABUTOPS] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AERODACTYL] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNORLAX] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARTICUNO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZAPDOS] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MOLTRES] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRATINI] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGONAIR] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGONITE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEWTWO] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEW] = TUTOR(MOVE_FIRE_PUNCH)
                  | TUTOR(MOVE_SWORDS_DANCE)
                  | TUTOR(MOVE_THUNDERPUNCH)
                  | TUTOR(MOVE_BODY_SLAM)
                  | TUTOR(MOVE_DOUBLE_EDGE)
                  | TUTOR(MOVE_KNOCK_OFF)
                  | TUTOR(MOVE_SEISMIC_TOSS)
                  | TUTOR(MOVE_AVALANCHE)
                  | TUTOR(MOVE_ICE_PUNCH)
                  | TUTOR(MOVE_SOFT_BOILED)
                  | TUTOR(MOVE_DREAM_EATER)
                  | TUTOR(MOVE_CHARGE_UP)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_ROCK_SLIDE)
                  | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNIVY] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SERVINE] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SERPENTINE] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCORBUNNY] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RABOOT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNBURNER] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOTODILE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CROCONAW] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REXOBOXER] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_THUNDERPUNCH)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BIDOOF] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BIBAREL] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOOTHOOT] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NOCTOWL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KRICKETOT] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KRICKETUNE] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPINARAK] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARIADOS] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CROBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHINCHOU] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LANTURN] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PICHU] = TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDERPUNCH)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_KNOCK_OFF)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_CHARGE_UP)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFFA] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_SOFT_BOILED)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IGGLYBUFF] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOGEPI] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_SOFT_BOILED)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOGETIC] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDOVE] = TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_AVALANCHE)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_CHARGE_UP)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UNFEZANT] = TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_AVALANCHE)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_CHARGE_UP)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAREEP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLAAFFY] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AMPHAROS] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNBLOOM] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_METALLOY] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AZUMETAL] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GALLADE] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLISPARK] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHINX] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUXIO] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUXRAY] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AIPOM] = TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDERPUNCH)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_KNOCK_OFF)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_ICE_PUNCH)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_CHARGE_UP)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNKERN] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNFLORA] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_YANMA] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WOOPER] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QUAGSIRE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ESPEON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UMBREON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SANDILE] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KROKOROK] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KROOKODILE] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_CHARGE_UP)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UNOWN] = 0,

    [SPECIES_WOBBUFFET] = 0,

    [SPECIES_BOOMER] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PINECO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FORRETRESS] = TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_KNOCK_OFF)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_EXPLOSION)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUNSPARCE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LEVISCOR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STEELIX] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTOX] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VAMPERE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QWILFISH] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCIZOR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHUCKLE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HERACROSS] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNEEZLE] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TEDDIURSA] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ICE_PUNCH)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_URSARING] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLUGMA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGCARGO] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWINUB] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PILOSWINE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORSOLA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REMORAID] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OCTILLERY] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DELIBIRD] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANTINE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKARMORY] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOUNDOUR] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOUNDOOM] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KINGDRA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PHANPY] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DONPHAN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PORYGON2] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STANTLER] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SMEARGLE] = 0,

    [SPECIES_TYROGUE] = TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ANNIHILAPE] = TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAMOSWINE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTIVIRE] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGMORTAR] = TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDERPUNCH)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_KNOCK_OFF)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MILTANK] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLISSEY] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAIKOU] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ENTEI] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUICUNE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LARVITAR] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PUPITAR] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TYRANITAR] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUGIA] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_CHARGE_UP)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HO_OH] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_CHARGE_UP)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CELEBI] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TREECKO] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROVYLE] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCEPTILE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TORCHIC] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_COMBUSKEN] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BLAZIKEN] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MUDKIP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MARSHTOMP] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWAMPERT] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POOCHYENA] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MIGHTYENA] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZIGZAGOON] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LINOONE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPIRALOONE] = 0,

    [SPECIES_PANSAGE] = 0,

    [SPECIES_PANSEAR] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PANPOUR] = 0,

    [SPECIES_PANVOLT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOTAD] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOMBRE] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUDICOLO] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEEDOT] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NUZLEAF] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHIFTRY] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINCADA] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINJASK] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHEDINJA] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAILLOW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWELLOW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHROOMISH] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BRELOOM] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPINDA] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WINGULL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PELIPPER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WIMPOD] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLISOPOD] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_AVALANCHE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WAILMER] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WAILORD] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKITTY] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DELCATTY] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KECLEON] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BALTOY] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLAYDOL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NOSEPASS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TORKOAL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SABLEYE] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BARBOACH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WHISCASH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUVDISC] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORPHISH] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CRAWDAUNT] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FEEBAS] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MILOTIC] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CARVANHA] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHARPEDO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TRAPINCH] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VIBRAVA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLYGON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAKUHITA] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HARIYAMA] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTRIKE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANECTRIC] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NUMEL] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CAMERUPT] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPHEAL] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEALEO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WALREIN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CACNEA] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CACTURNE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNORUNT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLALIE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUNATONE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SOLROCK] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPARKITE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPOINK] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRUMPIG] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUSPECTO] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ICE_PUNCH)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DEDTECTO] = TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDERPUNCH)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_KNOCK_OFF)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_ICE_PUNCH)
                    | TUTOR(MOVE_CHARGE_UP)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAWILE] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEDITITE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEDICHAM] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWABLU] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ALTARIA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WYNAUT] = 0,

    [SPECIES_DUSKULL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUSCLOPS] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ROSELIA] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLAKOTH] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VIGOROTH] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLAKING] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CETODDLE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CETITAN] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TROPIUS] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WHISMUR] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOUDRED] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXPLOUD] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLAMPERL] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HUNTAIL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOREBYSS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ABSOL] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_KNOCK_OFF)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_CHARGE_UP)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHUPPET] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BANETTE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEVIPER] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZANGOOSE] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RELICANTH] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARON] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_AVALANCHE)
                   | TUTOR(MOVE_ROCK_SLIDE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LAIRON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AGGRON] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CASTFORM] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POCHITA] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WILDMUTT] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_ICE_PUNCH)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LILEEP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CRADILY] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ANORITH] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARMALDO] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RALTS] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_CHARGE_UP)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KIRLIA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GARDEVOIR] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BAGON] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_AVALANCHE)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHELGON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SALAMENCE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELDUM] = 0,

    [SPECIES_METANG] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_METAGROSS] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGIROCK] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDERPUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_KNOCK_OFF)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGICE] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REGISTEEL] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDERPUNCH)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_KNOCK_OFF)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_AVALANCHE)
                        | TUTOR(MOVE_CHARGE_UP)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KYOGRE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROUDON] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_THUNDERPUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_KNOCK_OFF)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAYQUAZA] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_CHARGE_UP)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LATIAS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LATIOS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JIRACHI] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_AVALANCHE)
                      | TUTOR(MOVE_ICE_PUNCH)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_CHARGE_UP)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DEOXYS] = TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDERPUNCH)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_KNOCK_OFF)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_AVALANCHE)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_CHARGE_UP)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHIMECHO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_AVALANCHE)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),
};
