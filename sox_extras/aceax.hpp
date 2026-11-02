	class CfgWeapons
	{
		class patch_helm
		{
			label = "Team Wendy EXFIL";
			author = "Socks | ADF Re-Cut";
			options[] =
			{
				"camo",
				"earpro",
				"scrim",
				"patch"
			};
			class camo
			{
				label = "Camo Pattern"
				alwaysSelectable = 1;
				values[] =
				{
					"AMC",
					"AMP",
					"BLK"
				};
				class AMC
				{
					label = "AMC";
					image = "\sox_extras\ui\amc_co.paa";
					description = "Australian Multicam";
				};
				class AMP
				{
					label = "AMP";
					image = "\sox_extras\ui\amp_co.paa";
					description = "Australian Multi Pattern";
				};
				class BLK
				{
					label = "Black";
					image = "#(rgb,1,1,1)color(0.062745,0.062745,0.062745,1)";
					description = "Black AMC";
				};
			};
			class earpro
			{
				label = "Earpro";
				values[] =
				{
					"comtac",
					"amps"
				};
				class comtac
				{
					label = "Comtac-6";
					description = "Comtac-6";
				};
				class amps
				{
					label = "Amps";
					description = "Amps";
				};
			};
			class scrim
			{
				label = "Scrim";
				values[] = 
				{
					"on",
					"off"
				};
				class on
				{
					label = "On";
					description = "Scrim On";
				};
				class off
				{
					label = "Off";
					description = "Scrim Off";
				};
			};
			class patch
			{
				label = "Morale Patch";
				alwaysSelectable = 1;
				values[] =
				{
					"D207",
					"PHQ",
					"Alpha",
					"Bravo",
					"Charlie",
					"Reaper",
					"Starlight",
					"SHQ",
					"Foxtrot",
					"Ghost",
					"Hawkeye",
					"Defend"
				};
				class D207
				{
					label = "D207";
					description = "207 Skull";
					image = "\sox_extras\ui\207_ca.paa";
				};
				class PHQ
				{
					label = "1-1 PHQ";
					description = "Platoon HQ";
					image = "\Hue_Additions_Patreon_Patches\PatchTextures\11HQ.paa";
				};
				class Alpha
				{
					label = "1-1 Alpha";
					description = "Alpha Section";
					image = "\sox_extras\ui\11A_ca.paa";
				};
				class Bravo
				{
					label = "1-1 Bravo";
					description = "Bravo Section";
					image = "\Hue_Additions_Patreon_Patches\PatchTextures\11B.paa";
				};
				class Charlie
				{
					label = "1-1 Charlie";
					description = "Charlie Section";
					image = "\Hue_Additions_Patreon_Patches\PatchTextures\11C.paa";
				};
				class Reaper
				{
					label = "1-1 Reaper";
					description = "Reaper DFSW";
					image = "\Hue_Additions_Patreon_Patches\PatchTextures\11R.paa";
				};
				class Starlight
				{
					label = "1-1 Starlight";
					description = "Starlight Medic Team";
					image = "\sox_extras\ui\11S_ca.paa";
				};
				class SHQ
				{
					label = "1-5 SHQ";
					description = "Support HQ";
					image = "\Hue_Additions_Patreon_Patches\PatchTextures\15HQ.paa";
				};
				class Foxtrot
				{
					label = "1-5 Foxtrot";
					description = "Foxtrot and Daisy";
					image = "\Hue_Additions_Patreon_Patches\PatchTextures\15F.paa";
				};
				class Ghost
				{
					label = "1-5 Ghost";
					description = "Ghost Element";
					image = "\Hue_Additions_Patreon_Patches\PatchTextures\15G.paa";
				};
				class Hawkeye
				{
					label = "1-5 Hawkeye";
					description = "207 Aviation Team";
					image = "\Hue_Additions_Patreon_Patches\PatchTextures\15H_NM.paa";
				};
				class Defend
				{
					label = "Defend";
					description = "Defend Equality";
					image = "\sox_extras\ui\defend_ca.paa";
				};
			};
		};

		class g3_207
		{
			label = "Crye G3 Combat Fatigues";
			author = "Socks";
			options[] =
			{
				"sleeves"
			};
			textureOptions[] =
			{
				"camo"
			};
			class camo
			{
				label = "Camo";
				values[] =
				{
					"AMCU",
					"AMPU",
					"AMCS",
					"AMCT"
				};
				hiddenSelection = "Camo";
				class AMCU
				{
					texture = "\sox_extras\uni\tx\207amc_uni.paa";
					image = "\sox_extras\ui\amc_co.paa";
				};
				class AMPU
				{
					texture = "\sox_extras\uni\tx\207amp_uni.paa";
					image = "\sox_extras\ui\amp_co.paa";
				};
				class AMCS
				{
					texture = "\sox_extras\uni\tx\207ams_uni.paa";
					image = "\sox_extras\ui\ams_co.paa";
				};
				class AMCT
				{
					texture = "\sox_extras\uni\tx\207amt_uni.paa";
					image = "\sox_extras\ui\amt_co.paa";
				};
			};
			class sleeves
			{
				label = "Sleeves";
				values[] =
				{
					"full",
					"roll"
				};
				class full
				{
					label = "Full";
					description = "No Roll";
				};
				class roll
				{
					label = "Rolled";
					description = "Some Roll";
				};
			};
		};

		class cvc_helm
		{
			label = "Gentex CVC M9";
			author = "Socks | ADF Re-Cut";
			options[] =
			{
				"colour",
				"patch"
			};
			class colour
			{
				label = "Helmet Colour";
				alwaysSelectable = 1;
				values[] =
				{
					"Tan",
					"OD"
				};
				class Tan
				{
					label = "Tan";
					image = "#(rgb,1,1,1)color(0.570,0.460,0.329,1)";
					description = "Tan Spray";
				};
				class OD
				{
					label = "OD";
					image = "#(rgb,1,1,1)color(0.232,0.301,0.159,1)";
					description = "OD Spray";
				};
			};
			class patch
			{
				label = "Helmet Art";
				values[] = 
				{
					"Fox_1",
					"Fox_2",
					"Dsy_1",
					"Dsy_2"
				};
				class Fox_1
				{
					label = "Foxtrot 1";
					description = "Foxtrot Art";
				};
				class Fox_2
				{
					label = "Foxtrot 2";
					description = "Foxtrot Art";
				};
				class Dsy_1
				{
					label = "Daisy 1";
					description = "Daisy Art";
				};
				class Dsy_2
				{
					label = "Daisy 2";
					description = "Daisy Art";
				};
			};
		};
	};
