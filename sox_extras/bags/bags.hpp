	class adfrc_Bullock_Base;
    
	class adfrc_patrol_bullock_ampu_177: adfrc_Bullock_Base
	{
		author = "Sox | ADFU Team";
		scope = 2;
		model = "\ADF_Gear_2\adfrc_backpacks\bullock_177.p3d";
		displayname = "Patrol Pack Bullock AMPU 177";
		picture = "\ADF_Gear_2\adfrc_backpacks\ui\bullock_177_ui.paa";
		hiddenSelections[] = 
        {
            "Camo",
            "Camo1"
        };
		hiddenSelectionsTextures[] = 
        {
            "sox_extras\bags\tx\bullock_ampu_co.paa",
            "ADF_Gear_2\adfrc_backpacks\data\rdo_co.paa"
        };
		maximumLoad = 360;
		mass = 60;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};