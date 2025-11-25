const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("UNKNOWN"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .unusedDescription = gDummyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BULBASAUR] =
    {
        .categoryName = _("BULB"),
        .height = 7,
        .weight = 69,
        .description = gBulbasaurPokedexText,
        .unusedDescription = gBulbasaurPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_IVYSAUR] =
    {
        .categoryName = _("BULB"),
        .height = 10,
        .weight = 130,
        .description = gIvysaurPokedexText,
        .unusedDescription = gIvysaurPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VENUSAUR] =
    {
        .categoryName = _("FOREST"),
        .height = 20,
        .weight = 1000,
        .description = gVenusaurPokedexText,
        .unusedDescription = gVenusaurPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHARMANDER] =
    {
        .categoryName = _("FLAME"),
        .height = 6,
        .weight = 85,
        .description = gCharmanderPokedexText,
        .unusedDescription = gCharmanderPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHARMELEON] =
    {
        .categoryName = _("FLAME"),
        .height = 11,
        .weight = 190,
        .description = gCharmeleonPokedexText,
        .unusedDescription = gCharmeleonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHARIZARD] =
    {
        .categoryName = _("FLAME"),
        .height = 17,
        .weight = 905,
        .description = gCharizardPokedexText,
        .unusedDescription = gCharizardPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SQUIRTLE] =
    {
        .categoryName = _("TINY-TURTLE"),
        .height = 5,
        .weight = 90,
        .description = gSquirtlePokedexText,
        .unusedDescription = gSquirtlePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WARTORTLE] =
    {
        .categoryName = _("WAR-TURTLE"),
        .height = 10,
        .weight = 225,
        .description = gWartortlePokedexText,
        .unusedDescription = gWartortlePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BLASTOISE] =
    {
        .categoryName = _("WAR-TURTLE"),
        .height = 16,
        .weight = 855,
        .description = gBlastoisePokedexText,
        .unusedDescription = gBlastoisePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CATERPIE] =
    {
        .categoryName = _("WORM"),
        .height = 3,
        .weight = 29,
        .description = gCaterpiePokedexText,
        .unusedDescription = gCaterpiePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_METAPOD] =
    {
        .categoryName = _("COCOON"),
        .height = 7,
        .weight = 99,
        .description = gMetapodPokedexText,
        .unusedDescription = gMetapodPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BETTERFLY] =
    {
        .categoryName = _("BUTTERFLY"),
        .height = 11,
        .weight = 320,
        .description = gBetterflyPokedexText,
        .unusedDescription = gBetterflyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WEEDLE] =
    {
        .categoryName = _("WORM"),
        .height = 3,
        .weight = 32,
        .description = gWeedlePokedexText,
        .unusedDescription = gWeedlePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KAKUNA] =
    {
        .categoryName = _("COCOON"),
        .height = 6,
        .weight = 100,
        .description = gKakunaPokedexText,
        .unusedDescription = gKakunaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BEEDRILL] =
    {
        .categoryName = _("POISON-BEE"),
        .height = 10,
        .weight = 295,
        .description = gBeedrillPokedexText,
        .unusedDescription = gBeedrillPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIDGEY] =
    {
        .categoryName = _("TINY-BIRD"),
        .height = 3,
        .weight = 18,
        .description = gPidgeyPokedexText,
        .unusedDescription = gPidgeyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIDGEOTTO] =
    {
        .categoryName = _("BIRD"),
        .height = 11,
        .weight = 300,
        .description = gPidgeottoPokedexText,
        .unusedDescription = gPidgeottoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIDGEOT] =
    {
        .categoryName = _("BIG-BIRD"),
        .height = 15,
        .weight = 395,
        .description = gPidgeotPokedexText,
        .unusedDescription = gPidgeotPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RATTATA] =
    {
        .categoryName = _("RAT"),
        .height = 3,
        .weight = 35,
        .description = gRattataPokedexText,
        .unusedDescription = gRattataPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RATICATE] =
    {
        .categoryName = _("RAT"),
        .height = 7,
        .weight = 185,
        .description = gRaticatePokedexText,
        .unusedDescription = gRaticatePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SPEAROW] =
    {
        .categoryName = _("ANGRY-BIRD"),
        .height = 3,
        .weight = 20,
        .description = gSpearowPokedexText,
        .unusedDescription = gSpearowPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_FEAROW] =
    {
        .categoryName = _("ANGRY-BIRD"),
        .height = 12,
        .weight = 380,
        .description = gFearowPokedexText,
        .unusedDescription = gFearowPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_EKANS] =
    {
        .categoryName = _("SNAKE"),
        .height = 20,
        .weight = 69,
        .description = gEkansPokedexText,
        .unusedDescription = gEkansPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ARBOK] =
    {
        .categoryName = _("KOBRA"),
        .height = 35,
        .weight = 650,
        .description = gArbokPokedexText,
        .unusedDescription = gArbokPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIKACHU] =
    {
        .categoryName = _("MOUSE"),
        .height = 4,
        .weight = 60,
        .description = gPikachuPokedexText,
        .unusedDescription = gPikachuPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RAICHU] =
    {
        .categoryName = _("MOUSE"),
        .height = 8,
        .weight = 300,
        .description = gRaichuPokedexText,
        .unusedDescription = gRaichuPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SANDSHREW] =
    {
        .categoryName = _("SHREW"),
        .height = 6,
        .weight = 120,
        .description = gSandshrewPokedexText,
        .unusedDescription = gSandshrewPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SANDSLASH] =
    {
        .categoryName = _("SHREW"),
        .height = 10,
        .weight = 295,
        .description = gSandslashPokedexText,
        .unusedDescription = gSandslashPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NIDORAN_F] =
    {
        .categoryName = _("POISON-PIN"),
        .height = 4,
        .weight = 70,
        .description = gNidoranFPokedexText,
        .unusedDescription = gNidoranFPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NIDORINA] =
    {
        .categoryName = _("POISON-PIN"),
        .height = 8,
        .weight = 200,
        .description = gNidorinaPokedexText,
        .unusedDescription = gNidorinaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NIDOQUEEN] =
    {
        .categoryName = _("QUEEN"),
        .height = 13,
        .weight = 600,
        .description = gNidoqueenPokedexText,
        .unusedDescription = gNidoqueenPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NIDORAN_M] =
    {
        .categoryName = _("POISON-PIN"),
        .height = 5,
        .weight = 90,
        .description = gNidoranMPokedexText,
        .unusedDescription = gNidoranMPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NIDORINO] =
    {
        .categoryName = _("POISON-PIN"),
        .height = 9,
        .weight = 195,
        .description = gNidorinoPokedexText,
        .unusedDescription = gNidorinoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NIDOKING] =
    {
        .categoryName = _("KING"),
        .height = 14,
        .weight = 620,
        .description = gNidokingPokedexText,
        .unusedDescription = gNidokingPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CLEFAIRY] =
    {
        .categoryName = _("MOON-FAIRY"),
        .height = 6,
        .weight = 75,
        .description = gClefairyPokedexText,
        .unusedDescription = gClefairyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CLEFABLE] =
    {
        .categoryName = _("MOON-FAIRY"),
        .height = 13,
        .weight = 400,
        .description = gClefablePokedexText,
        .unusedDescription = gClefablePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VULPIX] =
    {
        .categoryName = _("FIRE-FOX"),
        .height = 6,
        .weight = 99,
        .description = gVulpixPokedexText,
        .unusedDescription = gVulpixPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NINETALES] =
    {
        .categoryName = _("FIRE-FOX"),
        .height = 11,
        .weight = 199,
        .description = gNinetalesPokedexText,
        .unusedDescription = gNinetalesPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_JIGGLYPUFF] =
    {
        .categoryName = _("SINGING"),
        .height = 5,
        .weight = 55,
        .description = gJigglypuffPokedexText,
        .unusedDescription = gJigglypuffPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WIGGLYTUFF] =
    {
        .categoryName = _("BRAWLING"),
        .height = 10,
        .weight = 120,
        .description = gWigglytuffPokedexText,
        .unusedDescription = gWigglytuffPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZUBAT] =
    {
        .categoryName = _("BAT"),
        .height = 8,
        .weight = 75,
        .description = gZubatPokedexText,
        .unusedDescription = gZubatPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GOLBAT] =
    {
        .categoryName = _("BAT"),
        .height = 16,
        .weight = 550,
        .description = gGolbatPokedexText,
        .unusedDescription = gGolbatPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ODDISH] =
    {
        .categoryName = _("ROOT"),
        .height = 5,
        .weight = 54,
        .description = gOddishPokedexText,
        .unusedDescription = gOddishPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GLOOM] =
    {
        .categoryName = _("PERFUME"),
        .height = 8,
        .weight = 86,
        .description = gGloomPokedexText,
        .unusedDescription = gGloomPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VILEPLUME] =
    {
        .categoryName = _("FLOWER"),
        .height = 12,
        .weight = 186,
        .description = gVileplumePokedexText,
        .unusedDescription = gVileplumePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PARAS] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 3,
        .weight = 54,
        .description = gParasPokedexText,
        .unusedDescription = gParasPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PARASECT] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 10,
        .weight = 295,
        .description = gParasectPokedexText,
        .unusedDescription = gParasectPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VENONAT] =
    {
        .categoryName = _("INSECT"),
        .height = 10,
        .weight = 300,
        .description = gVenonatPokedexText,
        .unusedDescription = gVenonatPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_METAMOTH] =
    {
        .categoryName = _("MOTH"),
        .height = 15,
        .weight = 125,
        .description = gMetamothPokedexText,
        .unusedDescription = gMetamothPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DIGLETT] =
    {
        .categoryName = _("MOLE"),
        .height = 2,
        .weight = 8,
        .description = gDiglettPokedexText,
        .unusedDescription = gDiglettPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DUGTRIO] =
    {
        .categoryName = _("MOLE"),
        .height = 7,
        .weight = 333,
        .description = gDugtrioPokedexText,
        .unusedDescription = gDugtrioPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MEOWTH] =
    {
        .categoryName = _("SCRATCH-CAT"),
        .height = 4,
        .weight = 42,
        .description = gMeowthPokedexText,
        .unusedDescription = gMeowthPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PERSIAN] =
    {
        .categoryName = _("SCRATCH-CAT"),
        .height = 10,
        .weight = 320,
        .description = gPersianPokedexText,
        .unusedDescription = gPersianPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PSYDUCK] =
    {
        .categoryName = _("DUCK"),
        .height = 8,
        .weight = 196,
        .description = gPsyduckPokedexText,
        .unusedDescription = gPsyduckPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GOLDUCK] =
    {
        .categoryName = _("DUCK"),
        .height = 17,
        .weight = 766,
        .description = gGolduckPokedexText,
        .unusedDescription = gGolduckPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MANKEY] =
    {
        .categoryName = _("PIG-MONKEY"),
        .height = 5,
        .weight = 280,
        .description = gMankeyPokedexText,
        .unusedDescription = gMankeyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PRIMEAPE] =
    {
        .categoryName = _("PIG-MONKEY"),
        .height = 10,
        .weight = 320,
        .description = gPrimeapePokedexText,
        .unusedDescription = gPrimeapePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GROWLITHE] =
    {
        .categoryName = _("PUPPY"),
        .height = 7,
        .weight = 190,
        .description = gGrowlithePokedexText,
        .unusedDescription = gGrowlithePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ARCANINE] =
    {
        .categoryName = _("LEGENDARY"),
        .height = 19,
        .weight = 1550,
        .description = gArcaninePokedexText,
        .unusedDescription = gArcaninePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_POLIWAG] =
    {
        .categoryName = _("TADPOLE"),
        .height = 6,
        .weight = 124,
        .description = gPoliwagPokedexText,
        .unusedDescription = gPoliwagPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_POLIWHIRL] =
    {
        .categoryName = _("TOAD"),
        .height = 10,
        .weight = 200,
        .description = gPoliwhirlPokedexText,
        .unusedDescription = gPoliwhirlPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_POLIWRATH] =
    {
        .categoryName = _("TOAD"),
        .height = 13,
        .weight = 540,
        .description = gPoliwrathPokedexText,
        .unusedDescription = gPoliwrathPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ABRA] =
    {
        .categoryName = _("PSI"),
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
        .unusedDescription = gAbraPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KADABRA] =
    {
        .categoryName = _("PSI"),
        .height = 13,
        .weight = 565,
        .description = gKadabraPokedexText,
        .unusedDescription = gKadabraPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ALAKAZAM] =
    {
        .categoryName = _("PSI"),
        .height = 15,
        .weight = 480,
        .description = gAlakazamPokedexText,
        .unusedDescription = gAlakazamPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MACHOP] =
    {
        .categoryName = _("SUPERPOWER"),
        .height = 8,
        .weight = 195,
        .description = gMachopPokedexText,
        .unusedDescription = gMachopPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MACHOKE] =
    {
        .categoryName = _("SUPERPOWER"),
        .height = 15,
        .weight = 705,
        .description = gMachokePokedexText,
        .unusedDescription = gMachokePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MACHAMP] =
    {
        .categoryName = _("SUPERPOWER"),
        .height = 16,
        .weight = 1300,
        .description = gMachampPokedexText,
        .unusedDescription = gMachampPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BELLSPROUT] =
    {
        .categoryName = _("SHOOTER"),
        .height = 7,
        .weight = 40,
        .description = gBellsproutPokedexText,
        .unusedDescription = gBellsproutPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WEEPINBELL] =
    {
        .categoryName = _("GROUNDED"),
        .height = 10,
        .weight = 84,
        .description = gWeepinbellPokedexText,
        .unusedDescription = gWeepinbellPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VICTREEBEL] =
    {
        .categoryName = _("TWIN-BLADE"),
        .height = 16,
        .weight = 620,
        .description = gVictreebelPokedexText,
        .unusedDescription = gVictreebelPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TENTACOOL] =
    {
        .categoryName = _("SQUID"),
        .height = 9,
        .weight = 455,
        .description = gTentacoolPokedexText,
        .unusedDescription = gTentacoolPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TENTACRUEL] =
    {
        .categoryName = _("SQUID"),
        .height = 16,
        .weight = 550,
        .description = gTentacruelPokedexText,
        .unusedDescription = gTentacruelPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GEODUDE] =
    {
        .categoryName = _("ROCK"),
        .height = 4,
        .weight = 200,
        .description = gGeodudePokedexText,
        .unusedDescription = gGeodudePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GRAVELER] =
    {
        .categoryName = _("ROCK"),
        .height = 10,
        .weight = 1050,
        .description = gGravelerPokedexText,
        .unusedDescription = gGravelerPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GOLEM] =
    {
        .categoryName = _("MEGAROCK"),
        .height = 14,
        .weight = 3000,
        .description = gGolemPokedexText,
        .unusedDescription = gGolemPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PONYTA] =
    {
        .categoryName = _("FIRE-HORSE"),
        .height = 10,
        .weight = 300,
        .description = gPonytaPokedexText,
        .unusedDescription = gPonytaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RAPIDASH] =
    {
        .categoryName = _("FIRE-HORSE"),
        .height = 17,
        .weight = 950,
        .description = gRapidashPokedexText,
        .unusedDescription = gRapidashPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SLOWPOKE] =
    {
        .categoryName = _("DOPEY"),
        .height = 12,
        .weight = 360,
        .description = gSlowpokePokedexText,
        .unusedDescription = gSlowpokePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SLOWBRO] =
    {
        .categoryName = _("SWIMMER"),
        .height = 16,
        .weight = 485,
        .description = gSlowbroPokedexText,
        .unusedDescription = gSlowbroPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGNEMITE] =
    {
        .categoryName = _("MAGNET"),
        .height = 3,
        .weight = 60,
        .description = gMagnemitePokedexText,
        .unusedDescription = gMagnemitePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGNETON] =
    {
        .categoryName = _("3-MAGNETS"),
        .height = 10,
        .weight = 600,
        .description = gMagnetonPokedexText,
        .unusedDescription = gMagnetonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_FARFETCHD] =
    {
        .categoryName = _("LEEK-DUCK"),
        .height = 8,
        .weight = 150,
        .description = gFarfetchdPokedexText,
        .unusedDescription = gFarfetchdPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DODUO] =
    {
        .categoryName = _("TWIN-BIRD"),
        .height = 14,
        .weight = 392,
        .description = gDoduoPokedexText,
        .unusedDescription = gDoduoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DODRIO] =
    {
        .categoryName = _("TRIPLE-BIRD"),
        .height = 18,
        .weight = 852,
        .description = gDodrioPokedexText,
        .unusedDescription = gDodrioPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SEEL] =
    {
        .categoryName = _("PUPPY"),
        .height = 5,
        .weight = 92,
        .description = gSeelPokedexText,
        .unusedDescription = gSeelPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DEWGONG] =
    {
        .categoryName = _("SUN-WOLF"),
        .height = 8,
        .weight = 250,
        .description = gDewgongPokedexText,
        .unusedDescription = gDewgongPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GRIMER] =
    {
        .categoryName = _("SLUDGE"),
        .height = 9,
        .weight = 300,
        .description = gGrimerPokedexText,
        .unusedDescription = gGrimerPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MUK] =
    {
        .categoryName = _("SLUDGE"),
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
        .unusedDescription = gMukPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHELLDER] =
    {
        .categoryName = _("OYSTER"),
        .height = 3,
        .weight = 40,
        .description = gShellderPokedexText,
        .unusedDescription = gShellderPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CLOYSTER] =
    {
        .categoryName = _("OYSTER"),
        .height = 15,
        .weight = 1325,
        .description = gCloysterPokedexText,
        .unusedDescription = gCloysterPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GASTLY] =
    {
        .categoryName = _("GHOST"),
        .height = 13,
        .weight = 1,
        .description = gGastlyPokedexText,
        .unusedDescription = gGastlyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HAUNTER] =
    {
        .categoryName = _("GHOST"),
        .height = 16,
        .weight = 1,
        .description = gHaunterPokedexText,
        .unusedDescription = gHaunterPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GENGAR] =
    {
        .categoryName = _("SHADOW"),
        .height = 15,
        .weight = 405,
        .description = gGengarPokedexText,
        .unusedDescription = gGengarPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ONIX] =
    {
        .categoryName = _("ROCK-SNAKE"),
        .height = 88,
        .weight = 2100,
        .description = gOnixPokedexText,
        .unusedDescription = gOnixPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DROWZEE] =
    {
        .categoryName = _("HYPNOSIS"),
        .height = 10,
        .weight = 324,
        .description = gDrowzeePokedexText,
        .unusedDescription = gDrowzeePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HYPNO] =
    {
        .categoryName = _("HYPNOSIS"),
        .height = 16,
        .weight = 756,
        .description = gHypnoPokedexText,
        .unusedDescription = gHypnoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KRABBY] =
    {
        .categoryName = _("RIVER-CRAB"),
        .height = 4,
        .weight = 65,
        .description = gKrabbyPokedexText,
        .unusedDescription = gKrabbyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KINGLER] =
    {
        .categoryName = _("RIVER-CRAB"),
        .height = 13,
        .weight = 600,
        .description = gKinglerPokedexText,
        .unusedDescription = gKinglerPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VOLTORB] =
    {
        .categoryName = _("BALL"),
        .height = 5,
        .weight = 104,
        .description = gVoltorbPokedexText,
        .unusedDescription = gVoltorbPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ELECTRODE] =
    {
        .categoryName = _("BALL"),
        .height = 12,
        .weight = 666,
        .description = gElectrodePokedexText,
        .unusedDescription = gElectrodePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_EXEGGCUTE] =
    {
        .categoryName = _("SEED"),
        .height = 4,
        .weight = 25,
        .description = gExeggcutePokedexText,
        .unusedDescription = gExeggcutePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_EXEGGUTOR] =
    {
        .categoryName = _("TREE"),
        .height = 20,
        .weight = 1200,
        .description = gExeggutorPokedexText,
        .unusedDescription = gExeggutorPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CUBONE] =
    {
        .categoryName = _("BONE-KEEPER"),
        .height = 4,
        .weight = 65,
        .description = gCubonePokedexText,
        .unusedDescription = gCubonePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAROWAK] =
    {
        .categoryName = _("BONE-KEEPER"),
        .height = 10,
        .weight = 450,
        .description = gMarowakPokedexText,
        .unusedDescription = gMarowakPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HITMONLEE] =
    {
        .categoryName = _("KICKING"),
        .height = 15,
        .weight = 498,
        .description = gHitmonleePokedexText,
        .unusedDescription = gHitmonleePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HITMONCHAN] =
    {
        .categoryName = _("PUNCHING"),
        .height = 14,
        .weight = 502,
        .description = gHitmonchanPokedexText,
        .unusedDescription = gHitmonchanPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LICKITUNG] =
    {
        .categoryName = _("GRAPPLING"),
        .height = 14,
        .weight = 510,
        .description = gLickitungPokedexText,
        .unusedDescription = gLickitungPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KOFFING] =
    {
        .categoryName = _("POISON-GAS"),
        .height = 6,
        .weight = 10,
        .description = gKoffingPokedexText,
        .unusedDescription = gKoffingPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WEEZING] =
    {
        .categoryName = _("POISON-GAS"),
        .height = 12,
        .weight = 95,
        .description = gWeezingPokedexText,
        .unusedDescription = gWeezingPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RHYHORN] =
    {
        .categoryName = _("DRILL"),
        .height = 10,
        .weight = 1150,
        .description = gRhyhornPokedexText,
        .unusedDescription = gRhyhornPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RHYDON] =
    {
        .categoryName = _("DRILL"),
        .height = 19,
        .weight = 1200,
        .description = gRhydonPokedexText,
        .unusedDescription = gRhydonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHANSEY] =
    {
        .categoryName = _("CARETAKER"),
        .height = 11,
        .weight = 346,
        .description = gChanseyPokedexText,
        .unusedDescription = gChanseyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TANGELA] =
    {
        .categoryName = _("CANNON"),
        .height = 15,
        .weight = 850,
        .description = gTangelaPokedexText,
        .unusedDescription = gTangelaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KANGASKHAN] =
    {
        .categoryName = _("MOTHER"),
        .height = 22,
        .weight = 800,
        .description = gKangaskhanPokedexText,
        .unusedDescription = gKangaskhanPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HORSEA] =
    {
        .categoryName = _("SEA-DRAGON"),
        .height = 4,
        .weight = 80,
        .description = gHorseaPokedexText,
        .unusedDescription = gHorseaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SEADRA] =
    {
        .categoryName = _("SEA-DRAGON"),
        .height = 12,
        .weight = 250,
        .description = gSeadraPokedexText,
        .unusedDescription = gSeadraPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GOLDEEN] =
    {
        .categoryName = _("JELLYFISH"),
        .height = 12,
        .weight = 330,
        .description = gGoldeenPokedexText,
        .unusedDescription = gGoldeenPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SEAKING] =
    {
        .categoryName = _("JELLYFISH"),
        .height = 22,
        .weight = 135,
        .description = gSeakingPokedexText,
        .unusedDescription = gSeakingPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_STARYU] =
    {
        .categoryName = _("STAR"),
        .height = 8,
        .weight = 345,
        .description = gStaryuPokedexText,
        .unusedDescription = gStaryuPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_STARMIE] =
    {
        .categoryName = _("DOUBLE-STAR"),
        .height = 11,
        .weight = 800,
        .description = gStarmiePokedexText,
        .unusedDescription = gStarmiePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MR_MIME] =
    {
        .categoryName = _("SCREENER"),
        .height = 13,
        .weight = 545,
        .description = gMrmimePokedexText,
        .unusedDescription = gMrmimePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SCYTHER] =
    {
        .categoryName = _("MANTIS"),
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
        .unusedDescription = gScytherPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_JYNX] =
    {
        .categoryName = _("POLAR-BEAR"),
        .height = 26,
        .weight = 2600,
        .description = gJynxPokedexText,
        .unusedDescription = gJynxPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ELECTABUZZ] =
    {
        .categoryName = _("SHOCKER"),
        .height = 11,
        .weight = 300,
        .description = gElectabuzzPokedexText,
        .unusedDescription = gElectabuzzPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGMAR] =
    {
        .categoryName = _("BURNER"),
        .height = 13,
        .weight = 445,
        .description = gMagmarPokedexText,
        .unusedDescription = gMagmarPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PINSIR] =
    {
        .categoryName = _("STAG-BEETLE"),
        .height = 15,
        .weight = 550,
        .description = gPinsirPokedexText,
        .unusedDescription = gPinsirPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TAUROS] =
    {
        .categoryName = _("WILD-BULL"),
        .height = 14,
        .weight = 884,
        .description = gTaurosPokedexText,
        .unusedDescription = gTaurosPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGIKARP] =
    {
        .categoryName = _("FISH"),
        .height = 9,
        .weight = 100,
        .description = gMagikarpPokedexText,
        .unusedDescription = gMagikarpPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GYARADOS] =
    {
        .categoryName = _("ATROCIOUS"),
        .height = 65,
        .weight = 2350,
        .description = gGyaradosPokedexText,
        .unusedDescription = gGyaradosPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LAPRAS] =
    {
        .categoryName = _("KRAKEN"),
        .height = 25,
        .weight = 2200,
        .description = gLaprasPokedexText,
        .unusedDescription = gLaprasPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DITTO] =
    {
        .categoryName = _("TRANSFORM"),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .unusedDescription = gDittoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_EEVEE] =
    {
        .categoryName = _("EVOLUTION"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .unusedDescription = gEeveePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VAPOREON] =
    {
        .categoryName = _("BUBBLE-JET"),
        .height = 10,
        .weight = 290,
        .description = gVaporeonPokedexText,
        .unusedDescription = gVaporeonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_JOLTEON] =
    {
        .categoryName = _("LIGHTNING"),
        .height = 8,
        .weight = 245,
        .description = gJolteonPokedexText,
        .unusedDescription = gJolteonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_FLAREON] =
    {
        .categoryName = _("PYRO"),
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
        .unusedDescription = gFlareonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PORYGON] =
    {
        .categoryName = _("FURNACE"),
        .height = 30,
        .weight = 160,
        .description = gPorygonPokedexText,
        .unusedDescription = gPorygonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_OMANYTE] =
    {
        .categoryName = _("SPIRAL"),
        .height = 4,
        .weight = 75,
        .description = gOmanytePokedexText,
        .unusedDescription = gOmanytePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_OMASTAR] =
    {
        .categoryName = _("SPIRAL"),
        .height = 10,
        .weight = 350,
        .description = gOmastarPokedexText,
        .unusedDescription = gOmastarPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KABUTO] =
    {
        .categoryName = _("SHELLFISH"),
        .height = 5,
        .weight = 115,
        .description = gKabutoPokedexText,
        .unusedDescription = gKabutoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KABUTOPS] =
    {
        .categoryName = _("SHELLFISH"),
        .height = 13,
        .weight = 405,
        .description = gKabutopsPokedexText,
        .unusedDescription = gKabutopsPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_AERODACTYL] =
    {
        .categoryName = _("FOSSIL"),
        .height = 18,
        .weight = 590,
        .description = gAerodactylPokedexText,
        .unusedDescription = gAerodactylPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SNORLAX] =
    {
        .categoryName = _("SLEEPING"),
        .height = 21,
        .weight = 4600,
        .description = gSnorlaxPokedexText,
        .unusedDescription = gSnorlaxPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ARTICUNO] =
    {
        .categoryName = _("BLIZZARD"),
        .height = 17,
        .weight = 554,
        .description = gArticunoPokedexText,
        .unusedDescription = gArticunoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZAPDOS] =
    {
        .categoryName = _("THUNDER"),
        .height = 16,
        .weight = 526,
        .description = gZapdosPokedexText,
        .unusedDescription = gZapdosPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MOLTRES] =
    {
        .categoryName = _("BURNING"),
        .height = 20,
        .weight = 600,
        .description = gMoltresPokedexText,
        .unusedDescription = gMoltresPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DRATINI] =
    {
        .categoryName = _("DRAGON"),
        .height = 18,
        .weight = 33,
        .description = gDratiniPokedexText,
        .unusedDescription = gDratiniPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DRAGONAIR] =
    {
        .categoryName = _("DRAGON"),
        .height = 40,
        .weight = 165,
        .description = gDragonairPokedexText,
        .unusedDescription = gDragonairPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DRAGONITE] =
    {
        .categoryName = _("DRAGON"),
        .height = 22,
        .weight = 2100,
        .description = gDragonitePokedexText,
        .unusedDescription = gDragonitePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MEWTWO] =
    {
        .categoryName = _("GENETIC"),
        .height = 20,
        .weight = 1220,
        .description = gMewtwoPokedexText,
        .unusedDescription = gMewtwoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MEW] =
    {
        .categoryName = _("NEW-SPECIES"),
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
        .unusedDescription = gMewPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SNIVY] =
    {
        .categoryName = _("VINE"),
        .height = 6,
        .weight = 81,
        .description = gSnivyPokedexText,
        .unusedDescription = gSnivyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SERVINE] =
    {
        .categoryName = _("VINE"),
        .height = 8,
        .weight = 160,
        .description = gServinePokedexText,
        .unusedDescription = gServinePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SERPENTINE] =
    {
        .categoryName = _("HAUNTED"),
        .height = 35,
        .weight = 530,
        .description = gSerpentinePokedexText,
        .unusedDescription = gSerpentinePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SCORBUNNY] =
    {
        .categoryName = _("FIRE-MOUSE"),
        .height = 4,
        .weight = 43,
        .description = gScorbunnyPokedexText,
        .unusedDescription = gScorbunnyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RABOOT] =
    {
        .categoryName = _("VOLCANO"),
        .height = 7,
        .weight = 250,
        .description = gRabootPokedexText,
        .unusedDescription = gRabootPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SUNBURNER] =
    {
        .categoryName = _("VOLCANO"),
        .height = 18,
        .weight = 830,
        .description = gSunburnerPokedexText,
        .unusedDescription = gSunburnerPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TOTODILE] =
    {
        .categoryName = _("BIG-JAW"),
        .height = 6,
        .weight = 95,
        .description = gTotodilePokedexText,
        .unusedDescription = gTotodilePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CROCONAW] =
    {
        .categoryName = _("BIG-JAW"),
        .height = 11,
        .weight = 250,
        .description = gCroconawPokedexText,
        .unusedDescription = gCroconawPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REXOBOXER] =
    {
        .categoryName = _("BOXER"),
        .height = 23,
        .weight = 900,
        .description = gRexoboxerPokedexText,
        .unusedDescription = gRexoboxerPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BIDOOF] =
    {
        .categoryName = _("BEAVER"),
        .height = 5,
        .weight = 200,
        .description = gBidoofPokedexText,
        .unusedDescription = gBidoofPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BIBAREL] =
    {
        .categoryName = _("BEAVER"),
        .height = 10,
        .weight = 315,
        .description = gBibarelPokedexText,
        .unusedDescription = gBibarelPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HOOTHOOT] =
    {
        .categoryName = _("NIGHT-OWL"),
        .height = 7,
        .weight = 212,
        .description = gHoothootPokedexText,
        .unusedDescription = gHoothootPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NOCTOWL] =
    {
        .categoryName = _("NIGHT-OWL"),
        .height = 16,
        .weight = 408,
        .description = gNoctowlPokedexText,
        .unusedDescription = gNoctowlPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KRICKETOT] =
    {
        .categoryName = _("CRICKET"),
        .height = 3,
        .weight = 22,
        .description = gKricketotPokedexText,
        .unusedDescription = gKricketotPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KRICKETUNE] =
    {
        .categoryName = _("CRICKET"),
        .height = 10,
        .weight = 255,
        .description = gKricketunePokedexText,
        .unusedDescription = gKricketunePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SPINARAK] =
    {
        .categoryName = _("SPIDER"),
        .height = 5,
        .weight = 85,
        .description = gSpinarakPokedexText,
        .unusedDescription = gSpinarakPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ARIADOS] =
    {
        .categoryName = _("SPIDER"),
        .height = 11,
        .weight = 335,
        .description = gAriadosPokedexText,
        .unusedDescription = gAriadosPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CROBAT] =
    {
        .categoryName = _("BAT"),
        .height = 18,
        .weight = 750,
        .description = gCrobatPokedexText,
        .unusedDescription = gCrobatPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHINCHOU] =
    {
        .categoryName = _("LIGHT"),
        .height = 5,
        .weight = 120,
        .description = gChinchouPokedexText,
        .unusedDescription = gChinchouPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LANTURN] =
    {
        .categoryName = _("LIGHT"),
        .height = 12,
        .weight = 225,
        .description = gLanturnPokedexText,
        .unusedDescription = gLanturnPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PICHU] =
    {
        .categoryName = _("MOUSE"),
        .height = 3,
        .weight = 20,
        .description = gPichuPokedexText,
        .unusedDescription = gPichuPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CLEFFA] =
    {
        .categoryName = _("ILLUSION"),
        .height = 7,
        .weight = 125,
        .description = gCleffaPokedexText,
        .unusedDescription = gCleffaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_IGGLYBUFF] =
    {
        .categoryName = _("ILLUSION"),
        .height = 16,
        .weight = 811,
        .description = gIgglybuffPokedexText,
        .unusedDescription = gIgglybuffPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TOGEPI] =
    {
        .categoryName = _("HAPPINESS"),
        .height = 3,
        .weight = 15,
        .description = gTogepiPokedexText,
        .unusedDescription = gTogepiPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TOGETIC] =
    {
        .categoryName = _("HAPPINESS"),
        .height = 6,
        .weight = 32,
        .description = gTogeticPokedexText,
        .unusedDescription = gTogeticPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PIDOVE] =
    {
        .categoryName = _("SMART-BIRD"),
        .height = 3,
        .weight = 21,
        .description = gPidovePokedexText,
        .unusedDescription = gPidovePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_UNFEZANT] =
    {
        .categoryName = _("SMART-BIRD"),
        .height = 12,
        .weight = 290,
        .description = gUnfezantPokedexText,
        .unusedDescription = gUnfezantPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAREEP] =
    {
        .categoryName = _("WOOL"),
        .height = 6,
        .weight = 78,
        .description = gMareepPokedexText,
        .unusedDescription = gMareepPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_FLAAFFY] =
    {
        .categoryName = _("WOOL"),
        .height = 8,
        .weight = 133,
        .description = gFlaaffyPokedexText,
        .unusedDescription = gFlaaffyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_AMPHAROS] =
    {
        .categoryName = _("LIGHT"),
        .height = 14,
        .weight = 615,
        .description = gAmpharosPokedexText,
        .unusedDescription = gAmpharosPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SUNBLOOM] =
    {
        .categoryName = _("SUNFLOWER"),
        .height = 4,
        .weight = 58,
        .description = gSunbloomPokedexText,
        .unusedDescription = gSunbloomPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_METALLOY] =
    {
        .categoryName = _("METAL-BALL"),
        .height = 4,
        .weight = 850,
        .description = gMetalloyPokedexText,
        .unusedDescription = gMetalloyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_AZUMETAL] =
    {
        .categoryName = _("METAL-BALL"),
        .height = 8,
        .weight = 2850,
        .description = gAzumetalPokedexText,
        .unusedDescription = gAzumetalPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GALLADE] =
    {
        .categoryName = _("BRAVE"),
        .height = 16,
        .weight = 520,
        .description = gGalladePokedexText,
        .unusedDescription = gGalladePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_POLISPARK] =
    {
        .categoryName = _("TOAD"),
        .height = 11,
        .weight = 339,
        .description = gPolisparkPokedexText,
        .unusedDescription = gPolisparkPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHINX] =
    {
        .categoryName = _("FLASH"),
        .height = 5,
        .weight = 95,
        .description = gShinxPokedexText,
        .unusedDescription = gShinxPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LUXIO] =
    {
        .categoryName = _("FLASH"),
        .height = 9,
        .weight = 305,
        .description = gLuxioPokedexText,
        .unusedDescription = gLuxioPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LUXRAY] =
    {
        .categoryName = _("FLASH"),
        .height = 14,
        .weight = 420,
        .description = gLuxrayPokedexText,
        .unusedDescription = gLuxrayPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_AIPOM] =
    {
        .categoryName = _("WARRIOR"),
        .height = 21,
        .weight = 1360,
        .description = gAipomPokedexText,
        .unusedDescription = gAipomPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SUNKERN] =
    {
        .categoryName = _("AURA"),
        .height = 7,
        .weight = 202,
        .description = gSunkernPokedexText,
        .unusedDescription = gSunkernPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SUNFLORA] =
    {
        .categoryName = _("AURA"),
        .height = 12,
        .weight = 540,
        .description = gSunfloraPokedexText,
        .unusedDescription = gSunfloraPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_YANMA] =
    {
        .categoryName = _("DRAGON"),
        .height = 25,
        .weight = 310,
        .description = gYanmaPokedexText,
        .unusedDescription = gYanmaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WOOPER] =
    {
        .categoryName = _("MUD-FISH"),
        .height = 4,
        .weight = 85,
        .description = gWooperPokedexText,
        .unusedDescription = gWooperPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_QUAGSIRE] =
    {
        .categoryName = _("MUD-FISH"),
        .height = 14,
        .weight = 750,
        .description = gQuagsirePokedexText,
        .unusedDescription = gQuagsirePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ESPEON] =
    {
        .categoryName = _("SUNLIGHT"),
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
        .unusedDescription = gEspeonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_UMBREON] =
    {
        .categoryName = _("MOONLIGHT"),
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
        .unusedDescription = gUmbreonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SANDILE] =
    {
        .categoryName = _("DESERT"),
        .height = 7,
        .weight = 152,
        .description = gSandilePokedexText,
        .unusedDescription = gSandilePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KROKOROK] =
    {
        .categoryName = _("DESERT"),
        .height = 10,
        .weight = 334,
        .description = gKrokorokPokedexText,
        .unusedDescription = gKrokorokPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KROOKODILE] =
    {
        .categoryName = _("CROCODILE"),
        .height = 15,
        .weight = 963,
        .description = gKrookodilePokedexText,
        .unusedDescription = gKrookodilePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_UNOWN] =
    {
        .categoryName = _("SYMBOL"),
        .height = 5,
        .weight = 50,
        .description = gUnownPokedexText,
        .unusedDescription = gUnownPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WOBBUFFET] =
    {
        .categoryName = _("WALL"),
        .height = 13,
        .weight = 285,
        .description = gWobbuffetPokedexText,
        .unusedDescription = gWobbuffetPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BOOMER] =
    {
        .categoryName = _("BLAST"),
        .height = 17,
        .weight = 313,
        .description = gBoomerPokedexText,
        .unusedDescription = gBoomerPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PINECO] =
    {
        .categoryName = _("BAGWORM"),
        .height = 6,
        .weight = 72,
        .description = gPinecoPokedexText,
        .unusedDescription = gPinecoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_FORRETRESS] =
    {
        .categoryName = _("BAGWORM"),
        .height = 12,
        .weight = 1258,
        .description = gForretressPokedexText,
        .unusedDescription = gForretressPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DUNSPARCE] =
    {
        .categoryName = _("MOLD"),
        .height = 6,
        .weight = 205,
        .description = gDunsparcePokedexText,
        .unusedDescription = gDunsparcePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GLIGAR] =
    {
        .categoryName = _("FLYSCORPION"),
        .height = 11,
        .weight = 648,
        .description = gGligarPokedexText,
        .unusedDescription = gGligarPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_STEELIX] =
    {
        .categoryName = _("STEEL-SNAKE"),
        .height = 92,
        .weight = 4000,
        .description = gSteelixPokedexText,
        .unusedDescription = gSteelixPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ELECTOX] =
    {
        .categoryName = _("EEL"),
        .height = 12,
        .weight = 220,
        .description = gElectoxPokedexText,
        .unusedDescription = gElectoxPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VAMPERE] =
    {
        .categoryName = _("EEL"),
        .height = 21,
        .weight = 805,
        .description = gVamperePokedexText,
        .unusedDescription = gVamperePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_QWILFISH] =
    {
        .categoryName = _("SOLDIER"),
        .height = 6,
        .weight = 105,
        .description = gQwilfishPokedexText,
        .unusedDescription = gQwilfishPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SCIZOR] =
    {
        .categoryName = _("CUTTER"),
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
        .unusedDescription = gScizorPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHUCKLE] =
    {
        .categoryName = _("STONE-AXE"),
        .height = 18,
        .weight = 890,
        .description = gShucklePokedexText,
        .unusedDescription = gShucklePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HERACROSS] =
    {
        .categoryName = _("SINGLE-HORN"),
        .height = 15,
        .weight = 540,
        .description = gHeracrossPokedexText,
        .unusedDescription = gHeracrossPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SNEASEL] =
    {
        .categoryName = _("SHARP-CLAW"),
        .height = 9,
        .weight = 280,
        .description = gSneaselPokedexText,
        .unusedDescription = gSneaselPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TEDDIURSA] =
    {
        .categoryName = _("LITTLE-BEAR"),
        .height = 6,
        .weight = 88,
        .description = gTeddiursaPokedexText,
        .unusedDescription = gTeddiursaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_URSARING] =
    {
        .categoryName = _("HIBERNATOR"),
        .height = 18,
        .weight = 1258,
        .description = gUrsaringPokedexText,
        .unusedDescription = gUrsaringPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SLUGMA] =
    {
        .categoryName = _("LAVA-SLUG"),
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
        .unusedDescription = gSlugmaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGCARGO] =
    {
        .categoryName = _("LAVA-SLUG"),
        .height = 8,
        .weight = 550,
        .description = gMagcargoPokedexText,
        .unusedDescription = gMagcargoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SWINUB] =
    {
        .categoryName = _("SWINE"),
        .height = 4,
        .weight = 65,
        .description = gSwinubPokedexText,
        .unusedDescription = gSwinubPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PILOSWINE] =
    {
        .categoryName = _("SWINE"),
        .height = 11,
        .weight = 558,
        .description = gPiloswinePokedexText,
        .unusedDescription = gPiloswinePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CORSOLA] =
    {
        .categoryName = _("COCOON"),
        .height = 32,
        .weight = 920,
        .description = gCorsolaPokedexText,
        .unusedDescription = gCorsolaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REMORAID] =
    {
        .categoryName = _("ANCHOR"),
        .height = 39,
        .weight = 2100,
        .description = gRemoraidPokedexText,
        .unusedDescription = gRemoraidPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_OCTILLERY] =
    {
        .categoryName = _("CANNON"),
        .height = 19,
        .weight = 1050,
        .description = gOctilleryPokedexText,
        .unusedDescription = gOctilleryPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DELIBIRD] =
    {
        .categoryName = _("DELIVERY"),
        .height = 9,
        .weight = 160,
        .description = gDelibirdPokedexText,
        .unusedDescription = gDelibirdPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MANTINE] =
    {
        .categoryName = _("KITE"),
        .height = 21,
        .weight = 2200,
        .description = gMantinePokedexText,
        .unusedDescription = gMantinePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SKARMORY] =
    {
        .categoryName = _("ARMOR-BIRD"),
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
        .unusedDescription = gSkarmoryPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HOUNDOUR] =
    {
        .categoryName = _("DARK"),
        .height = 6,
        .weight = 108,
        .description = gHoundourPokedexText,
        .unusedDescription = gHoundourPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HOUNDOOM] =
    {
        .categoryName = _("DARK"),
        .height = 14,
        .weight = 350,
        .description = gHoundoomPokedexText,
        .unusedDescription = gHoundoomPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KINGDRA] =
    {
        .categoryName = _("SEA-DRAGON"),
        .height = 18,
        .weight = 1520,
        .description = gKingdraPokedexText,
        .unusedDescription = gKingdraPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PHANPY] =
    {
        .categoryName = _("MOON-WOLF"),
        .height = 8,
        .weight = 250,
        .description = gPhanpyPokedexText,
        .unusedDescription = gPhanpyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DONPHAN] =
    {
        .categoryName = _("BIG-WOLF"),
        .height = 11,
        .weight = 300,
        .description = gDonphanPokedexText,
        .unusedDescription = gDonphanPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PORYGON2] =
    {
        .categoryName = _("CYBER"),
        .height = 6,
        .weight = 325,
        .description = gPorygon2PokedexText,
        .unusedDescription = gPorygon2PokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_STANTLER] =
    {
        .categoryName = _("REINDEER"),
        .height = 14,
        .weight = 712,
        .description = gStantlerPokedexText,
        .unusedDescription = gStantlerPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SMEARGLE] =
    {
        .categoryName = _("PAINTER"),
        .height = 15,
        .weight = 765,
        .description = gSmearglePokedexText,
        .unusedDescription = gSmearglePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TYROGUE] =
    {
        .categoryName = _("SCUFFLE"),
        .height = 7,
        .weight = 210,
        .description = gTyroguePokedexText,
        .unusedDescription = gTyroguePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ANNIHILAPE] =
    {
        .categoryName = _("PIG-MONKEY"),
        .height = 12,
        .weight = 560,
        .description = gAnnihilapePokedexText,
        .unusedDescription = gAnnihilapePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAMOSWINE] =
    {
        .categoryName = _("SWINE"),
        .height = 25,
        .weight = 2910,
        .description = gMamoswinePokedexText,
        .unusedDescription = gMamoswinePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ELECTIVIRE] =
    {
        .categoryName = _("SHOCKER"),
        .height = 18,
        .weight = 1386,
        .description = gElectivirePokedexText,
        .unusedDescription = gElectivirePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAGMORTAR] =
    {
        .categoryName = _("BURNER"),
        .height = 16,
        .weight = 680,
        .description = gMagmortarPokedexText,
        .unusedDescription = gMagmortarPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MILTANK] =
    {
        .categoryName = _("MILK-COW"),
        .height = 12,
        .weight = 755,
        .description = gMiltankPokedexText,
        .unusedDescription = gMiltankPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BLISSEY] =
    {
        .categoryName = _("CARETAKER"),
        .height = 15,
        .weight = 468,
        .description = gBlisseyPokedexText,
        .unusedDescription = gBlisseyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RAIKOU] =
    {
        .categoryName = _("THUNDER"),
        .height = 19,
        .weight = 1780,
        .description = gRaikouPokedexText,
        .unusedDescription = gRaikouPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ENTEI] =
    {
        .categoryName = _("VOLCANO"),
        .height = 21,
        .weight = 1980,
        .description = gEnteiPokedexText,
        .unusedDescription = gEnteiPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SUICUNE] =
    {
        .categoryName = _("AURORA"),
        .height = 20,
        .weight = 1870,
        .description = gSuicunePokedexText,
        .unusedDescription = gSuicunePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LARVITAR] =
    {
        .categoryName = _("ROCK-SKIN"),
        .height = 6,
        .weight = 720,
        .description = gLarvitarPokedexText,
        .unusedDescription = gLarvitarPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PUPITAR] =
    {
        .categoryName = _("ROCK-SKIN"),
        .height = 12,
        .weight = 1520,
        .description = gPupitarPokedexText,
        .unusedDescription = gPupitarPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TYRANITAR] =
    {
        .categoryName = _("ROCK-SKIN"),
        .height = 20,
        .weight = 2020,
        .description = gTyranitarPokedexText,
        .unusedDescription = gTyranitarPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LUGIA] =
    {
        .categoryName = _("GUARDIAN"),
        .height = 52,
        .weight = 2160,
        .description = gLugiaPokedexText,
        .unusedDescription = gLugiaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HO_OH] =
    {
        .categoryName = _("GUARDIAN"),
        .height = 38,
        .weight = 1990,
        .description = gHoOhPokedexText,
        .unusedDescription = gHoOhPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CELEBI] =
    {
        .categoryName = _("LOTUS"),
        .height = 6,
        .weight = 50,
        .description = gCelebiPokedexText,
        .unusedDescription = gCelebiPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TREECKO] =
    {
        .categoryName = _("GECKO"),
        .height = 5,
        .weight = 50,
        .description = gTreeckoPokedexText,
        .unusedDescription = gTreeckoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GROVYLE] =
    {
        .categoryName = _("GECKO"),
        .height = 9,
        .weight = 216,
        .description = gGrovylePokedexText,
        .unusedDescription = gGrovylePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SCEPTILE] =
    {
        .categoryName = _("FOREST"),
        .height = 17,
        .weight = 522,
        .description = gSceptilePokedexText,
        .unusedDescription = gSceptilePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TORCHIC] =
    {
        .categoryName = _("CHICKEN"),
        .height = 4,
        .weight = 25,
        .description = gTorchicPokedexText,
        .unusedDescription = gTorchicPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_COMBUSKEN] =
    {
        .categoryName = _("CHICKEN"),
        .height = 9,
        .weight = 195,
        .description = gCombuskenPokedexText,
        .unusedDescription = gCombuskenPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BLAZIKEN] =
    {
        .categoryName = _("BLAZE"),
        .height = 19,
        .weight = 520,
        .description = gBlazikenPokedexText,
        .unusedDescription = gBlazikenPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MUDKIP] =
    {
        .categoryName = _("MUD-FISH"),
        .height = 4,
        .weight = 76,
        .description = gMudkipPokedexText,
        .unusedDescription = gMudkipPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MARSHTOMP] =
    {
        .categoryName = _("MUD-FISH"),
        .height = 7,
        .weight = 280,
        .description = gMarshtompPokedexText,
        .unusedDescription = gMarshtompPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SWAMPERT] =
    {
        .categoryName = _("MUD-FISH"),
        .height = 15,
        .weight = 819,
        .description = gSwampertPokedexText,
        .unusedDescription = gSwampertPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_POOCHYENA] =
    {
        .categoryName = _("BITE"),
        .height = 5,
        .weight = 136,
        .description = gPoochyenaPokedexText,
        .unusedDescription = gPoochyenaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MIGHTYENA] =
    {
        .categoryName = _("BITE"),
        .height = 10,
        .weight = 370,
        .description = gMightyenaPokedexText,
        .unusedDescription = gMightyenaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZIGZAGOON] =
    {
        .categoryName = _("RACCOON"),
        .height = 4,
        .weight = 175,
        .description = gZigzagoonPokedexText,
        .unusedDescription = gZigzagoonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LINOONE] =
    {
        .categoryName = _("RACCOON"),
        .height = 5,
        .weight = 325,
        .description = gLinoonePokedexText,
        .unusedDescription = gLinoonePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SPIRALOONE] =
    {
        .categoryName = _("RACCOON"),
        .height = 16,
        .weight = 460,
        .description = gSpiraloonePokedexText,
        .unusedDescription = gSpiraloonePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PANSAGE] =
    {
        .categoryName = _("MONKEY"),
        .height = 5,
        .weight = 100,
        .description = gPansagePokedexText,
        .unusedDescription = gPansagePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PANSEAR] =
    {
        .categoryName = _("MONKEY"),
        .height = 5,
        .weight = 100,
        .description = gPansearPokedexText,
        .unusedDescription = gPansearPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PANPOUR] =
    {
        .categoryName = _("MONKEY"),
        .height = 5,
        .weight = 100,
        .description = gPanpourPokedexText,
        .unusedDescription = gPanpourPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PANVOLT] =
    {
        .categoryName = _("MONKEY"),
        .height = 5,
        .weight = 100,
        .description = gPanvoltPokedexText,
        .unusedDescription = gPanvoltPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LOTAD] =
    {
        .categoryName = _("WATER-WEED"),
        .height = 5,
        .weight = 26,
        .description = gLotadPokedexText,
        .unusedDescription = gLotadPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LOMBRE] =
    {
        .categoryName = _("CAREFREE"),
        .height = 12,
        .weight = 325,
        .description = gLombrePokedexText,
        .unusedDescription = gLombrePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LUDICOLO] =
    {
        .categoryName = _("CAREFREE"),
        .height = 15,
        .weight = 550,
        .description = gLudicoloPokedexText,
        .unusedDescription = gLudicoloPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SEEDOT] =
    {
        .categoryName = _("APPLE"),
        .height = 2,
        .weight = 5,
        .description = gSeedotPokedexText,
        .unusedDescription = gSeedotPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NUZLEAF] =
    {
        .categoryName = _("APPLE"),
        .height = 3,
        .weight = 10,
        .description = gNuzleafPokedexText,
        .unusedDescription = gNuzleafPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHIFTRY] =
    {
        .categoryName = _("APPLE"),
        .height = 4,
        .weight = 130,
        .description = gShiftryPokedexText,
        .unusedDescription = gShiftryPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TAILLOW] =
    {
        .categoryName = _("SWALLOW"),
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
        .unusedDescription = gTaillowPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SWELLOW] =
    {
        .categoryName = _("SWALLOW"),
        .height = 7,
        .weight = 198,
        .description = gSwellowPokedexText,
        .unusedDescription = gSwellowPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WINGULL] =
    {
        .categoryName = _("SEAGULL"),
        .height = 6,
        .weight = 95,
        .description = gWingullPokedexText,
        .unusedDescription = gWingullPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PELIPPER] =
    {
        .categoryName = _("WATER-BIRD"),
        .height = 12,
        .weight = 280,
        .description = gPelipperPokedexText,
        .unusedDescription = gPelipperPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RALTS] =
    {
        .categoryName = _("EMOTION"),
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
        .unusedDescription = gRaltsPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KIRLIA] =
    {
        .categoryName = _("EMOTION"),
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
        .unusedDescription = gKirliaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GARDEVOIR] =
    {
        .categoryName = _("BEAUTY"),
        .height = 16,
        .weight = 484,
        .description = gGardevoirPokedexText,
        .unusedDescription = gGardevoirPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WIMPOD] =
    {
        .categoryName = _("SCARED-BUG"),
        .height = 5,
        .weight = 120,
        .description = gWimpodPokedexText,
        .unusedDescription = gWimpodPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GOLISOPOD] =
    {
        .categoryName = _("SCARY-BUG"),
        .height = 20,
        .weight = 1080,
        .description = gGolisopodPokedexText,
        .unusedDescription = gGolisopodPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHROOMISH] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 4,
        .weight = 45,
        .description = gShroomishPokedexText,
        .unusedDescription = gShroomishPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BRELOOM] =
    {
        .categoryName = _("MUSHROOM"),
        .height = 12,
        .weight = 392,
        .description = gBreloomPokedexText,
        .unusedDescription = gBreloomPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SLAKOTH] =
    {
        .categoryName = _("SLACKER"),
        .height = 8,
        .weight = 240,
        .description = gSlakothPokedexText,
        .unusedDescription = gSlakothPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VIGOROTH] =
    {
        .categoryName = _("HYPERACTIVE"),
        .height = 14,
        .weight = 465,
        .description = gVigorothPokedexText,
        .unusedDescription = gVigorothPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SLAKING] =
    {
        .categoryName = _("SLACKER"),
        .height = 20,
        .weight = 1305,
        .description = gSlakingPokedexText,
        .unusedDescription = gSlakingPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NINCADA] =
    {
        .categoryName = _("CICADA"),
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
        .unusedDescription = gNincadaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NINJASK] =
    {
        .categoryName = _("NINJA"),
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
        .unusedDescription = gNinjaskPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHEDINJA] =
    {
        .categoryName = _("SHED"),
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
        .unusedDescription = gShedinjaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WHISMUR] =
    {
        .categoryName = _("WHISPER"),
        .height = 6,
        .weight = 163,
        .description = gWhismurPokedexText,
        .unusedDescription = gWhismurPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LOUDRED] =
    {
        .categoryName = _("BIG-VOICE"),
        .height = 10,
        .weight = 405,
        .description = gLoudredPokedexText,
        .unusedDescription = gLoudredPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_EXPLOUD] =
    {
        .categoryName = _("LOUD-NOISE"),
        .height = 15,
        .weight = 840,
        .description = gExploudPokedexText,
        .unusedDescription = gExploudPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAKUHITA] =
    {
        .categoryName = _("PUNCH-BAG"),
        .height = 10,
        .weight = 864,
        .description = gMakuhitaPokedexText,
        .unusedDescription = gMakuhitaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HARIYAMA] =
    {
        .categoryName = _("ARM-THRUST"),
        .height = 23,
        .weight = 2538,
        .description = gHariyamaPokedexText,
        .unusedDescription = gHariyamaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_AZURILL] =
    {
        .categoryName = _("SPEED"),
        .height = 7,
        .weight = 160,
        .description = gAzurillPokedexText,
        .unusedDescription = gAzurillPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NOSEPASS] =
    {
        .categoryName = _("STAR"),
        .height = 11,
        .weight = 288,
        .description = gNosepassPokedexText,
        .unusedDescription = gNosepassPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SKITTY] =
    {
        .categoryName = _("SUN"),
        .height = 16,
        .weight = 460,
        .description = gSkittyPokedexText,
        .unusedDescription = gSkittyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DELCATTY] =
    {
        .categoryName = _("MOON"),
        .height = 11,
        .weight = 326,
        .description = gDelcattyPokedexText,
        .unusedDescription = gDelcattyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SABLEYE] =
    {
        .categoryName = _("GREEDY"),
        .height = 13,
        .weight = 420,
        .description = gSableyePokedexText,
        .unusedDescription = gSableyePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MAWILE] =
    {
        .categoryName = _("KILLER"),
        .height = 6,
        .weight = 115,
        .description = gMawilePokedexText,
        .unusedDescription = gMawilePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ARON] =
    {
        .categoryName = _("IRON-ARMOR"),
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
        .unusedDescription = gAronPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LAIRON] =
    {
        .categoryName = _("IRON-ARMOR"),
        .height = 9,
        .weight = 1200,
        .description = gLaironPokedexText,
        .unusedDescription = gLaironPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_AGGRON] =
    {
        .categoryName = _("IRON-ARMOR"),
        .height = 21,
        .weight = 3600,
        .description = gAggronPokedexText,
        .unusedDescription = gAggronPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MEDITITE] =
    {
        .categoryName = _("MEDITATE"),
        .height = 6,
        .weight = 112,
        .description = gMedititePokedexText,
        .unusedDescription = gMedititePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MEDICHAM] =
    {
        .categoryName = _("MEDITATE"),
        .height = 13,
        .weight = 315,
        .description = gMedichamPokedexText,
        .unusedDescription = gMedichamPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ELECTRIKE] =
    {
        .categoryName = _("LIGHTNING"),
        .height = 6,
        .weight = 152,
        .description = gElectrikePokedexText,
        .unusedDescription = gElectrikePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MANECTRIC] =
    {
        .categoryName = _("LIGHTNING"),
        .height = 15,
        .weight = 402,
        .description = gManectricPokedexText,
        .unusedDescription = gManectricPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_PLUSLE] =
    {
        .categoryName = _("ALIVE"),
        .height = 6,
        .weight = 100,
        .description = gPluslePokedexText,
        .unusedDescription = gPluslePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MINUN] =
    {
        .categoryName = _("DEAD"),
        .height = 6,
        .weight = 10,
        .description = gMinunPokedexText,
        .unusedDescription = gMinunPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VOLBEAT] =
    {
        .categoryName = _("CHAINSAW"),
        .height = 6,
        .weight = 180,
        .description = gVolbeatPokedexText,
        .unusedDescription = gVolbeatPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ILLUMISE] =
    {
        .categoryName = _("CHAINSAW"),
        .height = 18,
        .weight = 1055,
        .description = gIllumisePokedexText,
        .unusedDescription = gIllumisePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ROSELIA] =
    {
        .categoryName = _("DOCTOR"),
        .height = 19,
        .weight = 273,
        .description = gRoseliaPokedexText,
        .unusedDescription = gRoseliaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GULPIN] =
    {
        .categoryName = _("BABY-WHALE"),
        .height = 12,
        .weight = 450,
        .description = gGulpinPokedexText,
        .unusedDescription = gGulpinPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SWALOT] =
    {
        .categoryName = _("BIG-WHALE"),
        .height = 45,
        .weight = 7000,
        .description = gSwalotPokedexText,
        .unusedDescription = gSwalotPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CARVANHA] =
    {
        .categoryName = _("BRUTAL"),
        .height = 8,
        .weight = 208,
        .description = gCarvanhaPokedexText,
        .unusedDescription = gCarvanhaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHARPEDO] =
    {
        .categoryName = _("BRUTAL"),
        .height = 18,
        .weight = 888,
        .description = gSharpedoPokedexText,
        .unusedDescription = gSharpedoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WAILMER] =
    {
        .categoryName = _("BABY-WHALE"),
        .height = 20,
        .weight = 1300,
        .description = gWailmerPokedexText,
        .unusedDescription = gWailmerPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WAILORD] =
    {
        .categoryName = _("BIG-WHALE"),
        .height = 145,
        .weight = 3980,
        .description = gWailordPokedexText,
        .unusedDescription = gWailordPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_NUMEL] =
    {
        .categoryName = _("ERUPTION"),
        .height = 7,
        .weight = 240,
        .description = gNumelPokedexText,
        .unusedDescription = gNumelPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CAMERUPT] =
    {
        .categoryName = _("ERUPTION"),
        .height = 19,
        .weight = 2200,
        .description = gCameruptPokedexText,
        .unusedDescription = gCameruptPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TORKOAL] =
    {
        .categoryName = _("COAL"),
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
        .unusedDescription = gTorkoalPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SPOINK] =
    {
        .categoryName = _("BOUNCE"),
        .height = 7,
        .weight = 306,
        .description = gSpoinkPokedexText,
        .unusedDescription = gSpoinkPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GRUMPIG] =
    {
        .categoryName = _("BOUNCE"),
        .height = 9,
        .weight = 715,
        .description = gGrumpigPokedexText,
        .unusedDescription = gGrumpigPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SPINDA] =
    {
        .categoryName = _("DIZZY"),
        .height = 11,
        .weight = 50,
        .description = gSpindaPokedexText,
        .unusedDescription = gSpindaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TRAPINCH] =
    {
        .categoryName = _("DESERT"),
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
        .unusedDescription = gTrapinchPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_VIBRAVA] =
    {
        .categoryName = _("DESERT"),
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
        .unusedDescription = gVibravaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_FLYGON] =
    {
        .categoryName = _("DESERT"),
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
        .unusedDescription = gFlygonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CACNEA] =
    {
        .categoryName = _("CACTUS"),
        .height = 4,
        .weight = 513,
        .description = gCacneaPokedexText,
        .unusedDescription = gCacneaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CACTURNE] =
    {
        .categoryName = _("SCARECROW"),
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
        .unusedDescription = gCacturnePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SWABLU] =
    {
        .categoryName = _("COTTON-BIRD"),
        .height = 4,
        .weight = 12,
        .description = gSwabluPokedexText,
        .unusedDescription = gSwabluPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ALTARIA] =
    {
        .categoryName = _("COTTON-BIRD"),
        .height = 11,
        .weight = 206,
        .description = gAltariaPokedexText,
        .unusedDescription = gAltariaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ZANGOOSE] =
    {
        .categoryName = _("WOLVERINE"),
        .height = 13,
        .weight = 403,
        .description = gZangoosePokedexText,
        .unusedDescription = gZangoosePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SEVIPER] =
    {
        .categoryName = _("FANG-SNAKE"),
        .height = 27,
        .weight = 525,
        .description = gSeviperPokedexText,
        .unusedDescription = gSeviperPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LUNATONE] =
    {
        .categoryName = _("METEORITE"),
        .height = 10,
        .weight = 1680,
        .description = gLunatonePokedexText,
        .unusedDescription = gLunatonePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SOLROCK] =
    {
        .categoryName = _("METEORITE"),
        .height = 12,
        .weight = 1540,
        .description = gSolrockPokedexText,
        .unusedDescription = gSolrockPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BARBOACH] =
    {
        .categoryName = _("CRUEL"),
        .height = 8,
        .weight = 260,
        .description = gBarboachPokedexText,
        .unusedDescription = gBarboachPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WHISCASH] =
    {
        .categoryName = _("CRUEL"),
        .height = 25,
        .weight = 2700,
        .description = gWhiscashPokedexText,
        .unusedDescription = gWhiscashPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CORPHISH] =
    {
        .categoryName = _("MYSTIC"),
        .height = 13,
        .weight = 252,
        .description = gCorphishPokedexText,
        .unusedDescription = gCorphishPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CRAWDAUNT] =
    {
        .categoryName = _("MYSTIC"),
        .height = 27,
        .weight = 2250,
        .description = gCrawdauntPokedexText,
        .unusedDescription = gCrawdauntPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BALTOY] =
    {
        .categoryName = _("CLAY-DOLL"),
        .height = 5,
        .weight = 215,
        .description = gBaltoyPokedexText,
        .unusedDescription = gBaltoyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CLAYDOL] =
    {
        .categoryName = _("CLAY-DOLL"),
        .height = 15,
        .weight = 1080,
        .description = gClaydolPokedexText,
        .unusedDescription = gClaydolPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LILEEP] =
    {
        .categoryName = _("SEA-LILY"),
        .height = 10,
        .weight = 238,
        .description = gLileepPokedexText,
        .unusedDescription = gLileepPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CRADILY] =
    {
        .categoryName = _("SEA-LILY"),
        .height = 15,
        .weight = 604,
        .description = gCradilyPokedexText,
        .unusedDescription = gCradilyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ANORITH] =
    {
        .categoryName = _("OLD-SHRIMP"),
        .height = 7,
        .weight = 125,
        .description = gAnorithPokedexText,
        .unusedDescription = gAnorithPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ARMALDO] =
    {
        .categoryName = _("JET-CLAW"),
        .height = 15,
        .weight = 682,
        .description = gArmaldoPokedexText,
        .unusedDescription = gArmaldoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_FEEBAS] =
    {
        .categoryName = _("FISH"),
        .height = 6,
        .weight = 74,
        .description = gFeebasPokedexText,
        .unusedDescription = gFeebasPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_MILOTIC] =
    {
        .categoryName = _("MYSTIC"),
        .height = 62,
        .weight = 1620,
        .description = gMiloticPokedexText,
        .unusedDescription = gMiloticPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CASTFORM] =
    {
        .categoryName = _("WEATHER"),
        .height = 3,
        .weight = 8,
        .description = gCastformPokedexText,
        .unusedDescription = gCastformPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KECLEON] =
    {
        .categoryName = _("CAMOUFLAGE"),
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
        .unusedDescription = gKecleonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHUPPET] =
    {
        .categoryName = _("PUPPET"),
        .height = 6,
        .weight = 23,
        .description = gShuppetPokedexText,
        .unusedDescription = gShuppetPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BANETTE] =
    {
        .categoryName = _("MARIONETTE"),
        .height = 11,
        .weight = 125,
        .description = gBanettePokedexText,
        .unusedDescription = gBanettePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DUSKULL] =
    {
        .categoryName = _("REQUIEM"),
        .height = 8,
        .weight = 150,
        .description = gDuskullPokedexText,
        .unusedDescription = gDuskullPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DUSCLOPS] =
    {
        .categoryName = _("BECKON"),
        .height = 16,
        .weight = 306,
        .description = gDusclopsPokedexText,
        .unusedDescription = gDusclopsPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_TROPIUS] =
    {
        .categoryName = _("TROPICAL"),
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
        .unusedDescription = gTropiusPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CHIMECHO] =
    {
        .categoryName = _("MUD"),
        .height = 10,
        .weight = 520,
        .description = gChimechoPokedexText,
        .unusedDescription = gChimechoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_ABSOL] =
    {
        .categoryName = _("DISASTER"),
        .height = 12,
        .weight = 470,
        .description = gAbsolPokedexText,
        .unusedDescription = gAbsolPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WYNAUT] =
    {
        .categoryName = _("KNIGHT"),
        .height = 10,
        .weight = 330,
        .description = gWynautPokedexText,
        .unusedDescription = gWynautPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SNORUNT] =
    {
        .categoryName = _("SHREW"),
        .height = 7,
        .weight = 400,
        .description = gSnoruntPokedexText,
        .unusedDescription = gSnoruntPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GLALIE] =
    {
        .categoryName = _("SHREW"),
        .height = 12,
        .weight = 550,
        .description = gGlaliePokedexText,
        .unusedDescription = gGlaliePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SPHEAL] =
    {
        .categoryName = _("ICE-BALL"),
        .height = 8,
        .weight = 395,
        .description = gSphealPokedexText,
        .unusedDescription = gSphealPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SEALEO] =
    {
        .categoryName = _("SEAL"),
        .height = 11,
        .weight = 876,
        .description = gSealeoPokedexText,
        .unusedDescription = gSealeoPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_WALREIN] =
    {
        .categoryName = _("WALRUS"),
        .height = 14,
        .weight = 1506,
        .description = gWalreinPokedexText,
        .unusedDescription = gWalreinPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_CLAMPERL] =
    {
        .categoryName = _("HEXNUT"),
        .height = 2,
        .weight = 80,
        .description = gClamperlPokedexText,
        .unusedDescription = gClamperlPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_HUNTAIL] =
    {
        .categoryName = _("HEXNUT"),
        .height = 25,
        .weight = 8000,
        .description = gHuntailPokedexText,
        .unusedDescription = gHuntailPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GOREBYSS] =
    {
        .categoryName = _("SNOWBALL"),
        .height = 7,
        .weight = 400,
        .description = gGorebyssPokedexText,
        .unusedDescription = gGorebyssPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RELICANTH] =
    {
        .categoryName = _("SNOWBALL"),
        .height = 17,
        .weight = 1200,
        .description = gRelicanthPokedexText,
        .unusedDescription = gRelicanthPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LUVDISC] =
    {
        .categoryName = _("GREAT-APE"),
        .height = 2.3,
        .weight = 2400,
        .description = gLuvdiscPokedexText,
        .unusedDescription = gLuvdiscPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BAGON] =
    {
        .categoryName = _("ENDURANCE"),
        .height = 6,
        .weight = 421,
        .description = gBagonPokedexText,
        .unusedDescription = gBagonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SHELGON] =
    {
        .categoryName = _("ENDURANCE"),
        .height = 11,
        .weight = 1105,
        .description = gShelgonPokedexText,
        .unusedDescription = gShelgonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_SALAMENCE] =
    {
        .categoryName = _("FLIGHT"),
        .height = 15,
        .weight = 1026,
        .description = gSalamencePokedexText,
        .unusedDescription = gSalamencePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_BELDUM] =
    {
        .categoryName = _("IRON-HAND"),
        .height = 6,
        .weight = 952,
        .description = gBeldumPokedexText,
        .unusedDescription = gBeldumPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_METANG] =
    {
        .categoryName = _("IRON-CLAW"),
        .height = 12,
        .weight = 2025,
        .description = gMetangPokedexText,
        .unusedDescription = gMetangPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_METAGROSS] =
    {
        .categoryName = _("IRON-SPIDER"),
        .height = 16,
        .weight = 5500,
        .description = gMetagrossPokedexText,
        .unusedDescription = gMetagrossPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGIROCK] =
    {
        .categoryName = _("ROCK-GOLEM"),
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
        .unusedDescription = gRegirockPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGICE] =
    {
        .categoryName = _("ICE-GOLEM"),
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
        .unusedDescription = gRegicePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_REGISTEEL] =
    {
        .categoryName = _("IRON-GOLEM"),
        .height = 19,
        .weight = 2050,
        .description = gRegisteelPokedexText,
        .unusedDescription = gRegisteelPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LATIAS] =
    {
        .categoryName = _("EON"),
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .unusedDescription = gLatiasPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_LATIOS] =
    {
        .categoryName = _("EON"),
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .unusedDescription = gLatiosPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_KYOGRE] =
    {
        .categoryName = _("OCEAN"),
        .height = 45,
        .weight = 3520,
        .description = gKyogrePokedexText,
        .unusedDescription = gKyogrePokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_GROUDON] =
    {
        .categoryName = _("CONTINENT"),
        .height = 35,
        .weight = 9500,
        .description = gGroudonPokedexText,
        .unusedDescription = gGroudonPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_RAYQUAZA] =
    {
        .categoryName = _("SKY-HIGH"),
        .height = 70,
        .weight = 2065,
        .description = gRayquazaPokedexText,
        .unusedDescription = gRayquazaPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_JIRACHI] =
    {
        .categoryName = _("ROSE"),
        .height = 9,
        .weight = 145,
        .description = gJirachiPokedexText,
        .unusedDescription = gJirachiPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
    },

    [NATIONAL_DEX_DEOXYS] =
    {
        .categoryName = _("GLITCH"),
        .height = 10,
        .weight = 100,
        .description = gDeoxysPokedexText,
        .unusedDescription = gDeoxysPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 2,
 },
};
