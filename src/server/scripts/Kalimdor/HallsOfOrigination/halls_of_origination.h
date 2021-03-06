/*
 * Copyright (C) 2008-2013 TrinityCore <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HALLS_OF_ORIGINATION_H
#define HALLS_OF_ORIGINATION_H

#define HoOScriptName "instance_halls_of_origination"

uint32 const EncounterCount = 12;

enum Data
{
    // Bosses
    DATA_TEMPLE_GUARDIAN_ANHUUR = 1,
    DATA_EARTHRAGER_PTAH,
    DATA_VAULT_OF_LIGHTS,
    DATA_FIRE_WARDEN,
    DATA_EARTH_WARDEN,
    DATA_WATER_WARDEN,
    DATA_AIR_WARDEN,
    DATA_ANRAPHET,
    DATA_ISISET,
    DATA_AMMUNAE,
    DATA_SETESH,
    DATA_RAJH,

    // Temple Guardian Anhuur
    DATA_ANHUUR_GUID,
    DATA_ANHUUR_LEFT_BEACON,
    DATA_ANHUUR_RIGHT_BEACON,
    DATA_ANHUUR_BRIDGE,
    DATA_ANHUUR_DOOR,

    // Anraphet
    DATA_BRANN_0_GUID,
    DATA_DEAD_ELEMENTALS,
    DATA_ANRAPHET_GUID,
};

enum Creatures
{
    BOSS_TEMPLE_GUARDIAN_ANHUUR     = 39425,
    NPC_CAVE_IN_STALKER             = 40183,
    NPC_SEARING_LIGHT               = 40283,

    BOSS_EARTHRAGER_PTAH            = 39428,
    NPC_BEETLE_STALKER              = 40459, // Summons both Jeweled Scarab and Dustbone Horror
    NPC_JEWELED_SCARAB              = 40458,
    NPC_DUSTBONE_HORROR             = 40450,
    NPC_QUICKSAND                   = 40503, // Summoned by a spell not in dbc (75550)
    NPC_TOMULTOUS_EARTHSTORM        = 40406,
    NPC_CAMEL                       = 39443,

    BOSS_ANRAPHET                   = 39788,
    NPC_FIRE_WARDEN                 = 39800,
    NPC_EARTH_WARDEN                = 39801,
    NPC_WATER_WARDEN                = 39802,
    NPC_AIR_WARDEN                  = 39803,
    NPC_BRANN_BRONZEBEARD_0         = 39908,
    NPC_ALPHA_BEAM                  = 41144,
    WARDEN_ENTRY_DATA_DELTA         = NPC_FIRE_WARDEN - DATA_FIRE_WARDEN,

    // Trash Mobs
    NPC_BLISTERING_SCARAB           = 40310,
    NPC_DUSTBONE_TORMENTOR          = 40311,
    NPC_FLUX_ANIMATOR               = 40033,
    NPC_LIFEWARDEN_NYMPH            = 40715,
    NPC_LIVING_VINE                 = 40668,
    NPC_SPATIAL_ANOMALY             = 40170,
    NPC_TEMPLE_SWIFTSTALKER         = 48139,
    NPC_TEMPLE_SHADOWLANCER         = 48141,
    NPC_TEMPLE_RUNECASTER           = 48140,
    NPC_TEMPLE_FIRESHAPER           = 48143,
    NPC_VENOMOUS_SKITTERER          = 39440,

    NPC_AQUA_BOMB                   = 41264,
    NPC_WATER_BUBBLE                = 41257,
    NPC_WHIRLING_WINDS              = 41245,
    NPC_OMEGA_STANCE                = 41194,
    BOSS_AMMUNAE                    = 39731,

    // Anhuur
    NPC_PIT_SNAKE                   = 39444,
    NPC_SEARING_FLAME               = 40283,
    NPC_LIGHT                       = 40183,
    NPC_FLAME_SUMMONER              = 40228,

    // Rajh
    BOSS_RAJH                       = 39378,
    NPC_SOLAR_WINDS_FACING          = 39634,
    NPC_SOLAR_WINDS                 = 39635,
    NPC_SOLAR_FIRE                  = 47922,
    NPC_INFERNO_LEAP                = 47040,
    NPC_ORB_OF_THE_SUN              = 40835,
    NPC_BLAZING_INFERNO             = 40927,
    NPC_SUN_TOUCHED_SERVANT         = 39366,
    NPC_SUN_TOUCHED_SPRITE          = 39369,
    NPC_SUN_TOUCHED_SPRITELING      = 39370,
    NPC_SUN_TOUCHED_SPEAKER         = 39373,

    // Setesh
    BOSS_SETESH                     = 39732,
    NPC_REIGN_OF_CHAOS_DUMMY        = 41168,
    NPC_CHAOS_PORTAL                = 41055,
    NPC_ADD_STALKER                 = 41479,
    NPC_VOID_SENTINEL               = 41208,
    NPC_CHAOS_BLAST                 = 41041,
    NPC_VOID_SEEKER                 = 41371,
    NPC_VOID_WURM                   = 41374,
    NPC_CHAOS_SEED                  = 41126,

    // Isiset
    BOSS_ISISET                     = 39587,
    NPC_STARRY_SKY                  = 39681,
    NPC_CELESTIAL_CALL              = 39721,
    NPC_ASTRAL_RAIN                 = 39720,
    NPC_VEIL_OF_SKY                 = 39722,
    NPC_ASTRAL_SHIFT_DUMMY          = 39787,

    // Ammunae
    NPC_SEEDLING_POD_1              = 51329,
    NPC_SEEDLING_POD_2              = 40592,
    NPC_BLOODPETAL_SPROUT           = 40630,
    NPC_BLOODPETAL_BLOSSOM          = 40622,
    NPC_SPORE                       = 40585,
};

enum GameObjects
{
    GO_ANHUURS_BRIDGE               = 206506,
    GO_DOODAD_ULDUM_ELEVATOR_COL01  = 207725,
    GO_ANHUURS_DOOR                 = 202307,
    GO_ANHUURS_RIGHT_BEACON         = 203136,
    GO_ANHUURS_RIGHT_BEACON_H       = 207219,
    GO_ANHUURS_LEFT_BEACON          = 203133,
    GO_ANHUURS_LEFT_BEACON_H        = 207218,
    GO_LIFT_OF_THE_MAKERS           = 207547,

    GO_VAULT_OF_LIGHTS_DOOR         = 202313,
    GO_SUN_MIRROR                   = 207726,
    GO_ANRAPHET_DOOR                = 202314,

    GO_DOODAD_ULDUM_LIGHTMACHINE_01 = 207375,
    GO_DOODAD_ULDUM_LIGHTMACHINE_02 = 207374,
    GO_DOODAD_ULDUM_LIGHTMACHINE_03 = 207377,
    GO_DOODAD_ULDUM_LIGHTMACHINE_04 = 207376,

    GO_DOODAD_ULDUM_LASERBEAMS01    = 207662, // Matches GO_DOODAD_ULDUM_LIGHTMACHINE_02
    GO_DOODAD_ULDUM_LASERBEAMS_01   = 207663, // Matches GO_DOODAD_ULDUM_LIGHTMACHINE_01
    GO_DOODAD_ULDUM_LASERBEAMS_02   = 207664, // Matches GO_DOODAD_ULDUM_LIGHTMACHINE_04
    GO_DOODAD_ULDUM_LASERBEAMS_03   = 207665, // Matches GO_DOODAD_ULDUM_LIGHTMACHINE_03
};

enum Misc
{
    AREA_TOMB_OF_THE_EARTHRAGER     = 5610,
    ACHIEV_VAULT_OF_LIGHTS_EVENT    = 24212, // Faster Than The Speed Of Light
    SPELL_VAULT_OF_LIGHTS_CREDIT    = 94067, // Not in DBC
};

enum GlobalActions
{
    ACTION_BRANN_INTRO,
    ACTION_ANRAPHET_INTRO,
    ACTION_ELEMENTAL_DIED,
    ACTION_ANRAPHET_DIED,
    ACTION_OMEGA_TRIGGER,
};

template<class AI>
CreatureAI* GetHallsOfOriginationAI(Creature* creature)
{
    if (InstanceMap* instance = creature->GetMap()->ToInstanceMap())
        if (instance->GetInstanceScript())
            if (instance->GetScriptId() == sObjectMgr->GetScriptId(HoOScriptName))
                return new AI(creature);
    return NULL;
}

#endif // HALLS_OF_ORIGINATION_H
