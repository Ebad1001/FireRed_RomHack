const struct Evolution gEvolutionTable[NUM_SPECIES][EVOS_PER_MON] =
{
    [SPECIES_BULBASAUR]  = {{EVO_LEVEL, 16, SPECIES_IVYSAUR}},
    [SPECIES_IVYSAUR]    = {{EVO_LEVEL, 36, SPECIES_VENUSAUR}},
    [SPECIES_CHARMANDER] = {{EVO_LEVEL, 16, SPECIES_CHARMELEON}},
    [SPECIES_CHARMELEON] = {{EVO_LEVEL, 36, SPECIES_CHARIZARD}},
    [SPECIES_SQUIRTLE]   = {{EVO_LEVEL, 16, SPECIES_WARTORTLE}},
    [SPECIES_WARTORTLE]  = {{EVO_LEVEL, 36, SPECIES_BLASTOISE}},
    [SPECIES_CATERPIE]   = {{EVO_LEVEL, 10, SPECIES_METAPOD}},
    [SPECIES_METAPOD]    = {{EVO_LEVEL, 15, SPECIES_VENOMOTH}},
    [SPECIES_WEEDLE]     = {{EVO_LEVEL, 10, SPECIES_KAKUNA}},
    [SPECIES_KAKUNA]     = {{EVO_LEVEL, 15, SPECIES_BEEDRILL}},
    [SPECIES_PIDGEY]     = {{EVO_LEVEL, 18, SPECIES_PIDGEOTTO}},
    [SPECIES_PIDGEOTTO]  = {{EVO_FRIENDSHIP, 250, SPECIES_PIDGEOT}},
    [SPECIES_RATTATA]    = {{EVO_LEVEL, 20, SPECIES_RATICATE}},
    [SPECIES_SPEAROW]    = {{EVO_LEVEL, 24, SPECIES_FEAROW}},
    [SPECIES_EKANS]      = {{EVO_LEVEL, 24, SPECIES_ARBOK}},
    [SPECIES_PICHU]      = {{EVO_FRIENDSHIP, 150, SPECIES_PIKACHU}},
    [SPECIES_PIKACHU]    = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU}},
    [SPECIES_SANDSHREW]  = {{EVO_LEVEL, 24, SPECIES_SANDSLASH}},
    [SPECIES_NIDORAN_F]  = {{EVO_LEVEL, 18, SPECIES_NIDORINA}},
    [SPECIES_NIDORINA]   = {{EVO_FRIENDSHIP, 200, SPECIES_NIDOQUEEN}},
    [SPECIES_NIDORAN_M]  = {{EVO_LEVEL, 18, SPECIES_NIDORINO}},
    [SPECIES_NIDORINO]   = {{EVO_FRIENDSHIP, 200, SPECIES_NIDOKING}},
    [SPECIES_CLEFAIRY]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}},
    [SPECIES_VULPIX]     = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}},
    [SPECIES_JIGGLYPUFF] = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}},
    [SPECIES_ZUBAT]      = {{EVO_LEVEL, 18, SPECIES_GOLBAT}},
    [SPECIES_GOLBAT]     = {{EVO_FRIENDSHIP, 250, SPECIES_CROBAT}},
    [SPECIES_ODDISH]     = {{EVO_LEVEL, 20, SPECIES_GLOOM}},
    [SPECIES_GLOOM]      = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_VILEPLUME},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}},
    [SPECIES_PARAS]      = {{EVO_LEVEL, 20, SPECIES_PARASECT}},
    [SPECIES_VENONAT]    = {{EVO_LEVEL, 20, SPECIES_BUTTERFREE}},
    [SPECIES_DIGLETT]    = {{EVO_LEVEL, 26, SPECIES_DUGTRIO}},
    [SPECIES_MEOWTH]     = {{EVO_LEVEL, 26, SPECIES_PERSIAN}},
    [SPECIES_PSYDUCK]    = {{EVO_LEVEL, 26, SPECIES_GOLDUCK}},
    [SPECIES_MANKEY]     = {{EVO_LEVEL, 25, SPECIES_PRIMEAPE}},
    [SPECIES_PRIMEAPE]   = {{EVO_LEVEL, 40, SPECIES_HITMONTOP}},
    [SPECIES_GROWLITHE]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}},
    [SPECIES_POLIWAG]    = {{EVO_LEVEL, 20, SPECIES_POLIWHIRL}},
    [SPECIES_POLIWHIRL]  = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_POLIWRATH},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_POLITOED}},
    [SPECIES_ABRA]       = {{EVO_LEVEL, 25, SPECIES_KADABRA}},
    [SPECIES_KADABRA]    = {{EVO_FRIENDSHIP, 250, SPECIES_ALAKAZAM}},
    [SPECIES_MACHOP]     = {{EVO_LEVEL, 25, SPECIES_MACHOKE}},
    [SPECIES_MACHOKE]    = {{EVO_FRIENDSHIP, 250, SPECIES_MACHAMP}},
    [SPECIES_BELLSPROUT] = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_WEEPINBELL}},
    [SPECIES_TENTACOOL]  = {{EVO_LEVEL, 30, SPECIES_TENTACRUEL}},
    [SPECIES_GEODUDE]    = {{EVO_LEVEL, 25, SPECIES_GRAVELER}},
    [SPECIES_GRAVELER]   = {{EVO_FRIENDSHIP, 250, SPECIES_GOLEM}},
    [SPECIES_PONYTA]     = {{EVO_LEVEL, 32, SPECIES_RAPIDASH}},
    [SPECIES_SLOWPOKE]   = {{EVO_LEVEL_ITEM, ITEM_SALAC_BERRY, SPECIES_SLOWBRO}},
    [SPECIES_MAGNEMITE]  = {{EVO_LEVEL, 32, SPECIES_MAGNETON}},
    [SPECIES_DODUO]      = {{EVO_LEVEL, 24, SPECIES_DODRIO}},
    [SPECIES_SEEL]       = {{EVO_LEVEL, 30, SPECIES_DEWGONG},
                            {EVO_LEVEL, 30, SPECIES_PHANPY},
                            {EVO_LEVEL, 30, SPECIES_DONPHAN}}, // 
    [SPECIES_QWILFISH]   = {{EVO_LEVEL, 30, SPECIES_TANGELA},
                            {EVO_LEVEL, 30, SPECIES_VICTREEBEL}}, // 
    [SPECIES_GRIMER]     = {{EVO_LEVEL, 30, SPECIES_MUK}},
    [SPECIES_MUK]        = {{EVO_LEVEL_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_CHIMECHO}},
    [SPECIES_KOFFING]    = {{EVO_LEVEL, 30, SPECIES_WEEZING}},
    [SPECIES_WEEZING]    = {{EVO_LEVEL_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_PORYGON}},
    [SPECIES_SHELLDER]   = {{EVO_LEVEL, 30, SPECIES_CLOYSTER}},
    [SPECIES_GASTLY]     = {{EVO_LEVEL, 25, SPECIES_HAUNTER}},
    [SPECIES_HAUNTER]    = {{EVO_FRIENDSHIP, 250, SPECIES_GENGAR}},
    [SPECIES_YANMA]      = {{EVO_LEVEL_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_ONIX},
                            {EVO_LEVEL_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_STEELIX}},
    [SPECIES_DROWZEE]    = {{EVO_LEVEL, 28, SPECIES_HYPNO}},
    [SPECIES_KRABBY]     = {{EVO_LEVEL, 26, SPECIES_KINGLER}},
    [SPECIES_VOLTORB]    = {{EVO_LEVEL, 28, SPECIES_ELECTRODE}},
    [SPECIES_EXEGGCUTE]  = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR}},
    [SPECIES_CUBONE]     = {{EVO_LEVEL, 18, SPECIES_MAROWAK}},
    [SPECIES_TYROGUE]    = {{EVO_LEVEL_ITEM, ITEM_GANLON_BERRY, SPECIES_HITMONCHAN},
                            {EVO_LEVEL_ITEM, ITEM_LIECHI_BERRY, SPECIES_HITMONLEE},
                            {EVO_LEVEL_ITEM, ITEM_LANSAT_BERRY, SPECIES_LICKITUNG}},
    [SPECIES_RHYHORN]    = {{EVO_LEVEL, 34, SPECIES_RHYDON}},
    [SPECIES_CHANSEY]    = {{EVO_FRIENDSHIP, 250, SPECIES_BLISSEY}},
    [SPECIES_HORSEA]     = {{EVO_LEVEL, 25, SPECIES_SEADRA}},
    [SPECIES_SEADRA]     = {{EVO_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}},
    [SPECIES_GOLDEEN]    = {{EVO_LEVEL, 30, SPECIES_SEAKING}},
    [SPECIES_STARYU]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}},
    [SPECIES_SCYTHER]    = {{EVO_LEVEL_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_SCIZOR},
                            {EVO_LEVEL_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_SHUCKLE}},
    [SPECIES_MAGMAR]     = {{EVO_TRADE, 0, SPECIES_MAGBY}},
    [SPECIES_ELECTABUZZ] = {{EVO_TRADE, 0, SPECIES_ELEKID}},
    [SPECIES_MAGIKARP]   = {{EVO_LEVEL, 20, SPECIES_GYARADOS}},
    [SPECIES_EEVEE]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                            {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                            {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_ESPEON},
                            {EVO_ITEM, ITEM_MOON_STONE, SPECIES_UMBREON}},
    [SPECIES_OMANYTE]    = {{EVO_LEVEL, 32, SPECIES_OMASTAR}},
    [SPECIES_KABUTO]     = {{EVO_LEVEL, 32, SPECIES_KABUTOPS}},
    [SPECIES_DRATINI]    = {{EVO_LEVEL, 25, SPECIES_DRAGONAIR}},
    [SPECIES_DRAGONAIR]  = {{EVO_LEVEL, 45, SPECIES_DRAGONITE}},
    [SPECIES_CHIKORITA]  = {{EVO_LEVEL, 20, SPECIES_BAYLEEF}},
    [SPECIES_BAYLEEF]    = {{EVO_LEVEL, 40, SPECIES_MEGANIUM}},
    [SPECIES_CYNDAQUIL]  = {{EVO_LEVEL, 20, SPECIES_QUILAVA}},
    [SPECIES_QUILAVA]    = {{EVO_LEVEL, 40, SPECIES_TYPHLOSION}},
    [SPECIES_TOTODILE]   = {{EVO_LEVEL, 20, SPECIES_CROCONAW}},
    [SPECIES_CROCONAW]   = {{EVO_LEVEL, 40, SPECIES_FERALIGATR}},
    [SPECIES_SENTRET]    = {{EVO_LEVEL, 20, SPECIES_FURRET}},
    [SPECIES_HOOTHOOT]   = {{EVO_LEVEL, 24, SPECIES_NOCTOWL}},
    [SPECIES_LEDYBA]     = {{EVO_LEVEL, 16, SPECIES_LEDIAN}},
    [SPECIES_SPINARAK]   = {{EVO_LEVEL, 16, SPECIES_ARIADOS}},
    [SPECIES_CHINCHOU]   = {{EVO_LEVEL, 26, SPECIES_LANTURN}},
    [SPECIES_CLEFFA]     = {{EVO_FRIENDSHIP, 250, SPECIES_IGGLYBUFF}},
    [SPECIES_TOGEPI]     = {{EVO_FRIENDSHIP, 150, SPECIES_TOGETIC}},
    [SPECIES_NATU]       = {{EVO_LEVEL, 24, SPECIES_XATU}},
    [SPECIES_MAREEP]     = {{EVO_LEVEL, 25, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]    = {{EVO_ITEM, ITEM_DRAGON_SCALE, SPECIES_AMPHAROS}},
    [SPECIES_MARILL]     = {{EVO_LEVEL, 26, SPECIES_AZUMARILL}},
    [SPECIES_HOPPIP]     = {{EVO_LEVEL, 18, SPECIES_SKIPLOOM}},
    [SPECIES_SKIPLOOM]   = {{EVO_LEVEL, 36, SPECIES_JUMPLUFF}},
    [SPECIES_SUNKERN]    = {{EVO_FRIENDSHIP, 250, SPECIES_SUNFLORA}},
    [SPECIES_WOOPER]     = {{EVO_LEVEL, 26, SPECIES_QUAGSIRE}},
    [SPECIES_MURKROW]    = {{EVO_LEVEL, 18, SPECIES_SLOWKING}},
    [SPECIES_SLOWKING]   = {{EVO_LEVEL, 36, SPECIES_MISDREAVUS}},
    [SPECIES_PINECO]     = {{EVO_LEVEL, 26, SPECIES_FORRETRESS}},
    [SPECIES_SNUBBULL]   = {{EVO_LEVEL, 28, SPECIES_GRANBULL}},
    [SPECIES_TEDDIURSA]  = {{EVO_LEVEL, 28, SPECIES_URSARING}},
    [SPECIES_SLUGMA]     = {{EVO_LEVEL, 30, SPECIES_MAGCARGO}},
    [SPECIES_SWINUB]     = {{EVO_LEVEL, 25, SPECIES_PILOSWINE}},
    [SPECIES_PILOSWINE]  = {{EVO_LEVEL, 40, SPECIES_SMOOCHUM}},
    [SPECIES_HOUNDOUR]   = {{EVO_LEVEL, 32, SPECIES_HOUNDOOM}},
    [SPECIES_LARVITAR]   = {{EVO_LEVEL, 25, SPECIES_PUPITAR}},
    [SPECIES_PUPITAR]    = {{EVO_LEVEL, 45, SPECIES_TYRANITAR}},
    [SPECIES_TREECKO]    = {{EVO_LEVEL, 16, SPECIES_GROVYLE}},
    [SPECIES_GROVYLE]    = {{EVO_LEVEL, 36, SPECIES_SCEPTILE}},
    [SPECIES_TORCHIC]    = {{EVO_LEVEL, 16, SPECIES_COMBUSKEN}},
    [SPECIES_COMBUSKEN]  = {{EVO_LEVEL, 36, SPECIES_BLAZIKEN}},
    [SPECIES_MUDKIP]     = {{EVO_LEVEL, 16, SPECIES_MARSHTOMP}},
    [SPECIES_MARSHTOMP]  = {{EVO_LEVEL, 36, SPECIES_SWAMPERT}},
    [SPECIES_POOCHYENA]  = {{EVO_LEVEL, 20, SPECIES_MIGHTYENA}},
    [SPECIES_ZIGZAGOON]  = {{EVO_LEVEL, 16, SPECIES_LINOONE}},
    [SPECIES_LINOONE]    = {{EVO_LEVEL, 32, SPECIES_WURMPLE}},
    [SPECIES_LOTAD]      = {{EVO_LEVEL, 24, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO},
                            {EVO_ITEM, ITEM_LEAF_STONE, SPECIES_LUDICOLO}},
    [SPECIES_SEEDOT]     = {{EVO_LEVEL_MALE, 32, SPECIES_NUZLEAF},
                            {EVO_LEVEL_FEMALE, 32, SPECIES_SHIFTRY}},
    [SPECIES_TAILLOW]    = {{EVO_LEVEL, 20, SPECIES_SWELLOW}},
    [SPECIES_WINGULL]    = {{EVO_LEVEL, 20, SPECIES_PELIPPER}},
    [SPECIES_RALTS]      = {{EVO_LEVEL, 16, SPECIES_KIRLIA}},
    [SPECIES_KIRLIA]     = {{EVO_LEVEL_MALE, 36, SPECIES_SUDOWOODO},
                            {EVO_LEVEL_FEMALE, 36, SPECIES_GARDEVOIR}},
    [SPECIES_SURSKIT]    = {{EVO_LEVEL, 26, SPECIES_MASQUERAIN}},
    [SPECIES_SHROOMISH]  = {{EVO_LEVEL, 26, SPECIES_BRELOOM}},
    [SPECIES_SLAKOTH]    = {{EVO_LEVEL, 18, SPECIES_VIGOROTH}},
    [SPECIES_VIGOROTH]   = {{EVO_LEVEL, 36, SPECIES_SLAKING}},
    [SPECIES_NINCADA]    = {{EVO_LEVEL_NINJASK, 18, SPECIES_NINJASK},
                            {EVO_LEVEL_SHEDINJA, 18, SPECIES_SHEDINJA}},
    [SPECIES_WHISMUR]    = {{EVO_LEVEL, 20, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]    = {{EVO_LEVEL, 32, SPECIES_EXPLOUD}},
    [SPECIES_MAKUHITA]   = {{EVO_LEVEL, 26, SPECIES_HARIYAMA}},
    [SPECIES_NOSEPASS]   = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_SKITTY},
                            {EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}},
    [SPECIES_ARON]       = {{EVO_LEVEL, 25, SPECIES_LAIRON}},
    [SPECIES_LAIRON]     = {{EVO_LEVEL, 40, SPECIES_AGGRON}},
    [SPECIES_MEDITITE]   = {{EVO_LEVEL, 28, SPECIES_MEDICHAM}},
    [SPECIES_ELECTRIKE]  = {{EVO_LEVEL, 28, SPECIES_MANECTRIC}},
    [SPECIES_PLUSLE]     = {{EVO_LEVEL, 1, SPECIES_MINUN}},
    [SPECIES_MINUN]      = {{EVO_LEVEL, 1, SPECIES_PLUSLE}},
    [SPECIES_VOLBEAT]    = {{EVO_LEVEL, 30, SPECIES_ILLUMISE}},
    [SPECIES_GULPIN]     = {{EVO_LEVEL, 30, SPECIES_SWALOT}},
    [SPECIES_CARVANHA]   = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_SHARPEDO}},
    [SPECIES_WAILMER]    = {{EVO_LEVEL, 30, SPECIES_WAILORD}},
    [SPECIES_NUMEL]      = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_CAMERUPT}},
    [SPECIES_SPOINK]     = {{EVO_LEVEL, 26, SPECIES_GRUMPIG}},
    [SPECIES_TRAPINCH]   = {{EVO_LEVEL, 18, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]    = {{EVO_LEVEL, 32, SPECIES_FLYGON}},
    [SPECIES_CACNEA]     = {{EVO_LEVEL, 24, SPECIES_CACTURNE}},
    [SPECIES_SWABLU]     = {{EVO_LEVEL, 32, SPECIES_ALTARIA}},
    [SPECIES_BARBOACH]   = {{EVO_LEVEL, 32, SPECIES_WHISCASH}},
    [SPECIES_CORPHISH]   = {{EVO_LEVEL, 32, SPECIES_CRAWDAUNT}},
    [SPECIES_BALTOY]     = {{EVO_LEVEL, 32, SPECIES_CLAYDOL}},
    [SPECIES_LILEEP]     = {{EVO_LEVEL, 32, SPECIES_CRADILY}},
    [SPECIES_ANORITH]    = {{EVO_LEVEL, 32, SPECIES_ARMALDO}},
    [SPECIES_FEEBAS]     = {{EVO_FRIENDSHIP, 200, SPECIES_MILOTIC}},
    [SPECIES_SHUPPET]    = {{EVO_LEVEL, 24, SPECIES_BANETTE}},
    [SPECIES_DUSKULL]    = {{EVO_LEVEL, 24, SPECIES_DUSCLOPS}},
    [SPECIES_SNORUNT]    = {{EVO_LEVEL, 24, SPECIES_GLALIE}},
    [SPECIES_SPHEAL]     = {{EVO_LEVEL, 25, SPECIES_SEALEO}},
    [SPECIES_SEALEO]     = {{EVO_LEVEL, 40, SPECIES_WALREIN}},
    [SPECIES_CLAMPERL]   = {{EVO_LEVEL, 40, SPECIES_HUNTAIL}},
    [SPECIES_GOREBYSS]   = {{EVO_LEVEL, 25, SPECIES_RELICANTH}},
    [SPECIES_RELICANTH]  = {{EVO_LEVEL, 45, SPECIES_LUVDISC}},
    [SPECIES_BAGON]      = {{EVO_LEVEL, 25, SPECIES_SHELGON}},
    [SPECIES_SHELGON]    = {{EVO_LEVEL, 45, SPECIES_SALAMENCE}},
    [SPECIES_BELDUM]     = {{EVO_LEVEL, 25, SPECIES_METANG}},
    [SPECIES_METANG]     = {{EVO_LEVEL, 45, SPECIES_METAGROSS}},
};
