#pragma once
namespace MtWest
{
	struct PlayerItem
	{
		__int16 itemIndex;
		__int32 itemMaxHealth = 100;
	};

	namespace Items
	{

		namespace Magazines
		{
			const PlayerItem MAGAZINE_BRAINWASHING_TIPS     = { 0x0044 };
			const PlayerItem MAGAZINE_CAMERA_1              = { 0x1801 };
			const PlayerItem MAGAZINE_CAMERA_2              = { 0x002F };
			const PlayerItem MAGAZINE_COOKING               = { 0x1001 };
			const PlayerItem MAGAZINE_CRIMINAL_BIOGRAPHY    = { 0x1401 };
			const PlayerItem MAGAZINE_CYCLING               = { 0x1F01 };
			const PlayerItem MAGAZINE_ENGINEERING           = { 0x1201 };
			const PlayerItem MAGAZINE_ENTERTAINMENT         = { 0x1701 };
			const PlayerItem MAGAZINE_HEALTH_1              = { 0x1E01 };
			const PlayerItem MAGAZINE_HEALTH_2              = { 0x2001 };
			const PlayerItem MAGAZINE_HOBBY                 = { 0x00C1 };
			const PlayerItem MAGAZINE_HORROR_NOVEL_1        = { 0x1C01 };
			const PlayerItem MAGAZINE_HORROR_NOVEL_2        = { 0x2101 };
			const PlayerItem MAGAZINE_INTERIOR_DESIGN       = { 0x1601 };
			const PlayerItem MAGAZINE_JAPANESE_CONVERSATION = { 0x0095 };
			const PlayerItem MAGAZINE_LIFESTYLE             = { 0x1101 };
			const PlayerItem MAGAZINE_SKATEBOARDING         = { 0x1901 };
			const PlayerItem MAGAZINE_SPORTS                = { 0x1301 };
			const PlayerItem MAGAZINE_SURVIVAL              = { 0x0038 };
			const PlayerItem MAGAZINE_TRAVEL                = { 0x1501 };
			const PlayerItem MAGAZINE_WARTIME_PHOTOGRAPHY   = { 0x1A01 };
			const PlayerItem MAGAZINE_WEEKLY_PHOTO_MAGAZINE = { 0x1B01 };
			const PlayerItem MAGAZINE_WORLD_NEWS            = { 0x1D01 };
			const PlayerItem MAGAZINE_WRESTLING             = { 0x009B };
		}

		namespace Food
		{
			const PlayerItem APPLE = { 0x00EE };
			const PlayerItem BAGUETTE = { 0x00D6 };
			const PlayerItem CABBAGE = { 0x00D2 };
			const PlayerItem CABBAGE_RED = { 0x00D5 };
			const PlayerItem CHEESE = { 0x00DE };
			const PlayerItem COOKIES = { 0x00E6 };
			const PlayerItem CORN = { 0x00D0 };
			const PlayerItem COFFE_CREAMER = { 0x00DC };
			const PlayerItem GRAPEFRUIT = { 0x00D8 };
			const PlayerItem ICE_POPS = { 0x00EF };
			const PlayerItem ICE_POPS_MELTED = { 0x3801 };
			const PlayerItem JAPANESE_RADISH = { 0x00D3 };
			const PlayerItem LETTUCE = { 0x00D4 };
			const PlayerItem MELON = { 0x00D7 };
			const PlayerItem MILK = { 0x00DB };
			const PlayerItem MILK_ALT = { 0x00F0 };
			const PlayerItem ORANGE = { 0x00D9 };
			const PlayerItem ORANGE_JUICE = { 0x00DA };
			const PlayerItem PIE = { 0x0071 };
			const PlayerItem PIZZA_GOLDEN_BROWN = { 0x006F };
			const PlayerItem PIZZA_ROTTEN = { 0x0070 };
			const PlayerItem PIZZA_UNCOOKED = { 0x006E };
			const PlayerItem MEAT_RAW = { 0x002A };
			const PlayerItem MEAT_SPOILED = { 0x002C };
			const PlayerItem SNACK = { 0x0026 };
			const PlayerItem SQUASH = { 0x00D1 };
			const PlayerItem THAWED_VEGETABLES = { 0x3901 };
			const PlayerItem VEGETABLES_FROZEN = { 0x00ED };
			//VEGETABLES_THAWED
			const PlayerItem WELL_DONE_STEAK = { 0x002B };
			const PlayerItem WINE = { 0x008C };
			const PlayerItem YOGURT = { 0x00DD };
			const PlayerItem ZUCCHINI = { 0x0091 };
		}

		namespace MixedDrinks
		{
			const PlayerItem ENERGIZER = { 0x3301 };
			const PlayerItem NECTAR = { 0x3201 };
			const PlayerItem QUICK_STEP = { 0x2E01 };
			const PlayerItem RANDOMIZER = { 0x2F01 };
			const PlayerItem SPITFIRE = { 0x3101 };
			const PlayerItem UNTOUCHABLE = { 0x3001 };
			const PlayerItem ZOMBAIT = { 0x3401 };
		}

		namespace Guns
		{
			const PlayerItem FIFTY_CAL_SNIPER = { 0x00BA };
			const PlayerItem HANDGUN		  = { 0x004B };
			const PlayerItem MACHINEGUN		  = { 0x0086 };
			const PlayerItem MEGA_BUSTER	  = { 0x006A };
			const PlayerItem NAILGUN          = { 0x0072 };
			const PlayerItem REAL_MEGA_BUSTER = { 0x003A };
			const PlayerItem SHOTGUN          = { 0x003C };
			const PlayerItem SNIPER_RIFLE     = { 0x0087 };
			const PlayerItem STUN_GUN         = { 0x0048 };
			const PlayerItem SUBMACHINE_GUN   = { 0x0052 };
			const PlayerItem WATER_GUN        = { 0x001E };
		}

		namespace MeleeWeapons
		{
			const PlayerItem TWO_BY_FOUR            = { 0x0088 };
			const PlayerItem BARBELL                = { 0x0065 };
			const PlayerItem BASEBALL_BAT           = { 0x0004 };
			const PlayerItem BATTLE_AXE             = { 0x0017 };
			const PlayerItem BOOMERANG              = { 0x0089 };
			const PlayerItem BOWLING_BALL           = { 0x0047 };
			const PlayerItem CEREMONIAL_SWORD       = { 0x00C3 };
			const PlayerItem CHAINSAW               = { 0x0035 };
			const PlayerItem CLEAVER                = { 0x0013 };
			const PlayerItem DUMBBELL               = { 0x0036 };
			const PlayerItem FIRE_AXE               = { 0x0031 };
			const PlayerItem FRYING_PAN             = { 0x0033 };
			const PlayerItem GUITAR_ACOUSTIC        = { 0x001B };
			const PlayerItem GUITAR_ELECTRIC_A      = { 0x008D };
			const PlayerItem GUITAR_ELECTRIC_B      = { 0x2201 };
			const PlayerItem GUITAR_BASS            = { 0x001A };
			const PlayerItem GUMBALL_MACHINE        = { 0x0069 };
			const PlayerItem HANGBAG                = { 0x0011 };
			const PlayerItem HEDGE_CLIPPERS         = { 0x004A };
			const PlayerItem HUNTING_KNIFE          = { 0x004C };
			const PlayerItem KATANA                 = { 0x0034 };
			const PlayerItem KING_SALMON            = { 0x008F };
			const PlayerItem LASER_SWORD            = { 0x000C };
			const PlayerItem LEAD_PIPE              = { 0x004F };
			const PlayerItem LIPSTICK_PROP          = { 0x0E01 };
			const PlayerItem MACHETE                = { 0x00BD };
			const PlayerItem MAILBOX                = { 0x00FC };
			const PlayerItem MAILBOX_POST           = { 0x00FE };
			const PlayerItem MANNEQUIN_FEMALE       = { 0x0059 };  //Are mannequins heavy?
			const PlayerItem MANNEQUIN_LIMB_ARM     = { 0x0055 };
			const PlayerItem MANNEQUIN_LIMB_ARM     = { 0x0056 };
			const PlayerItem MANNEQUIN_LIMB_ARM     = { 0x005B };
			const PlayerItem MANNEQUIN_LIMB_ARM     = { 0x005C };
			const PlayerItem MANNEQUIN_LIMB_LEG     = { 0x0057 };
			const PlayerItem MANNEQUIN_LIMB_LEG     = { 0x0058 };
			const PlayerItem MANNEQUIN_LIMB_LEG     = { 0x005D };
			const PlayerItem MANNEQUIN_LIMB_LEG     = { 0x005E };
			const PlayerItem MANNEQUIN_MALE         = { 0x0053 };
			const PlayerItem MANNEQUIN_TORSO_FEMALE = { 0x005A };
			const PlayerItem MANNEQUIN_TORSO_MALE   = { 0x0054 };
			const PlayerItem MEAT_CLEAVER_BIG       = { 0x0093 };
			const PlayerItem NIGHTSTICK             = { 0x008B };
			const PlayerItem PICK_AXE               = { 0x0021 };
			const PlayerItem PUSH_BROOM             = { 0x0008 };
			const PlayerItem PUSH_BROOM_HANDLE      = { 0x0009 };
			const PlayerItem RAT_STICK              = { 0x00F1 };
			const PlayerItem ROCK                   = { 0x009F };
			const PlayerItem SAW_BLADE              = { 0x00F4 };
			const PlayerItem SHOVEL                 = { 0x0007 };
			const PlayerItem SHOWER_HEAD            = { 0x00B8 };
			const PlayerItem SICKLE                 = { 0x0040 };
			const PlayerItem SLEDGEHAMMER           = { 0x0032 };
			const PlayerItem SMALL_CHAINSAW         = { 0x007F };
			const PlayerItem STEPLADDER             = { 0x0075 };
			const PlayerItem STOOL                  = { 0x2601 };
			const PlayerItem SWORD                  = { 0x00A8 };
		}

		namespace ThrowingWeapons
		{
			const PlayerItem GOLF_CLUB          = { 0x0024 };
			const PlayerItem GRENADE            = { 0x001D };
			const PlayerItem HOCKEY_STICK       = { 0x0010 };
			const PlayerItem MOLOTOV_COCKTAIL   = { 0x00BE };
			const PlayerItem PROPANE_TANK_SMALL = { 0x009A };
			const PlayerItem PROPANE_TANK_LARGE = { 0x004D };
			const PlayerItem QUEEN              = { 0x0045 };
			const PlayerItem RAT_SAUCER         = { 0x00F2 };
			const PlayerItem SOCCERBALL         = { 0x0025 };
		}

		namespace HeavyWeapons
		{
			//These items can't be stored in the inventory and are dropped when hit
			const PlayerItem BENCH             = { 0x00CA };
			const PlayerItem CACTUS            = { 0x0061 };
			const PlayerItem CASH_REGISTER     = { 0x0099 };
			const PlayerItem CHAIR_A           = { 0x0074 }; //ARE THESE HEAVY?
			const PlayerItem CHAIR_B           = { 0x0084 };
			const PlayerItem CHAIR_C           = { 0x2301 };
			const PlayerItem CHAIR_D           = { 0x2501 };
			const PlayerItem CHAIR_BLUE        = { 0x0023 };
			const PlayerItem CHAIR_GREY        = { 0x0085 };
			const PlayerItem CHAIR_ORANGE      = { 0x2401 };
			const PlayerItem CHAIR_RED         = { 0x2701 };
			const PlayerItem CHAIR_WHITE       = { 0x0012 };
			const PlayerItem EXCAVATOR         = { 0x0077 };
			const PlayerItem FENCE             = { 0x00F7 };
			const PlayerItem GARBAGE_CAN       = { 0x0005 };
			const PlayerItem HDTV              = { 0x006C };
			const PlayerItem HEAVY_MACHINE_GUN = { 0x0901 }; //Convicts' Jeep Machine Gun
			const PlayerItem LAWN_MOWER        = { 0x0046 };
			const PlayerItem PARASOL           = { 0x0030 };
			const PlayerItem POTTED_PLANT_A    = { 0x0039 }; //One of these (the smallest one) can be held in inventory
			const PlayerItem POTTED_PLANT_B    = { 0x005F };
			const PlayerItem POTTED_PLANT_C    = { 0x0060 };
			const PlayerItem POTTED_PLANT_D    = { 0x0062 };
			const PlayerItem POTTED_PLANT_E    = { 0x0063 };
			const PlayerItem POTTED_PLANT_F    = { 0x0064 };
			const PlayerItem SAUSAGE_RACK      = { 0x00CD };
			const PlayerItem SHOPPING_CART     = { 0x0002 };
			const PlayerItem SIGN              = { 0x0001 };
			const PlayerItem SIGN_ALT          = { 0x0050 };
			const PlayerItem SKATEBOARD        = { 0x0014 };
			const PlayerItem STEEL_RACK        = { 0x00CB };
			const PlayerItem TV                = { 0x0051 };
			const PlayerItem WEAPON_CART       = { 0x00A6 };
			const PlayerItem WINE_CASK         = { 0x0066 };
		}

		namespace MiscWeapons
		{
			const PlayerItem BAKING_INGREDIENTS   = { 0x00E7 };
			const PlayerItem BUCKET               = { 0x008A };
			const PlayerItem CANNED_FOOD          = { 0x00EB };
			const PlayerItem CANNED_SAUCE         = { 0x00EA };
			const PlayerItem CAN_DRINKS           = { 0x00EC };
			const PlayerItem CARDBOARD_BOX        = { 0x00B5 };
			const PlayerItem CDS                  = { 0x0801 };
			const PlayerItem CONDIMENTS           = { 0x00E9 };
			const PlayerItem COOKING_OIL          = { 0x00E8 };
			const PlayerItem DISHES               = { 0x00A0 };
			const PlayerItem FIRE_EXTINGUISHER    = { 0x002E };
			const PlayerItem GEMS                 = { 0x0016 };
			const PlayerItem HANGER               = { 0x0037 };
			const PlayerItem HUNK_OF_MEAT         = { 0x0101 };
			const PlayerItem NOVELTY_MASK_BEAR    = { 0x00C4 };
			const PlayerItem NOVELTY_MASK_GHOUL   = { 0x00C7 };
			const PlayerItem NOVELTY_MASK_HORSE   = { 0x00C5 };
			const PlayerItem NOVELTY_MASK_SERVBOT = { 0x00C6 };
			const PlayerItem OIL_BUCKET           = { 0x0098 };
			const PlayerItem PAINT_CAN            = { 0x000E };
			const PlayerItem PAINTING_A           = { 0x0043 };
			const PlayerItem PAINTING_B           = { 0x00F3 };
			const PlayerItem PAINTING_C           = { 0x00F8 };
			const PlayerItem PAINTING_D           = { 0x00FF };
			const PlayerItem PAINTING_E           = { 0x00C8 };
			const PlayerItem PERFUME_PROP         = { 0x0D01 };
			const PlayerItem PET_FOOD             = { 0x00E5 };
			const PlayerItem PLYWOOD_PANEL        = { 0x0401 };
			//PYLON
			const PlayerItem SHAMPOO              = { 0x00E4 };
			//SHELF
			const PlayerItem SKYLIGHT             = { 0x00F6 };
			const PlayerItem SMOKESTACK           = { 0x0073 };
			const PlayerItem STORE_DISPLAY_A      = { 0x0018 };
			const PlayerItem STORE_DISPLAY_B      = { 0x0019 };
			const PlayerItem STORE_DISPLAY_C      = { 0x001C };
			const PlayerItem STUFFED_BEAR         = { 0x00FB };
			const PlayerItem TOOLBOX              = { 0x0076 };
			const PlayerItem TOY_CUBE             = { 0x0015 };
			const PlayerItem TOY_LASER_SWORD      = { 0x0020 }; //In misc because barely does damage / used for illumination instead
			const PlayerItem VASE                 = { 0x0042 }; //Is this heavy?


			//What are these?
			const PlayerItem _BLANK_ITEM        = { 0x00A5 };
			const PlayerItem P9                 = { 0x00E1 };
			const PlayerItem PIPE_BOMB          = { 0x00BB };
			const PlayerItem __SELF             = { 0x00CC };
			const PlayerItem TNT                = { 0x00A9 };
		}

		namespace Vehicles
		{
			//BICYCLE
			//CONVERTIBLE
			//DELIVERY_TRUCK
			//MOTORCYCLE
		}
		
	}

}