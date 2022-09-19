class CfgWLRequisitionPresets
{
	class A3ReduxAll
	{
		class WEST
		{
			class Infantry
			{
				class LIB_GER_Scout_ober_rifleman_w			{cost = 20;		requirements[]={};	};	// "Rifleman"
				class LIB_GER_Radioman_w				    {cost = 25;		requirements[]={};	};	// "radio Trooper"
				class LIB_GER_Oberst_w	             		{cost = 30;		requirements[]={};	};	// "CTRG Scout"
				class LIB_GER_tank_crew					    {cost = 15;		requirements[]={};	};	// "Crewman"
				class LIB_GER_pilot 					    {cost = 10;		requirements[]={};	};	// "Pilot"
				class LIB_GER_ober_grenadier_w 				{cost = 50;		requirements[]={};	};	// "Grenadier"				
				class LIB_GER_Medic_w						{cost = 20;		requirements[]={};	};	// "Combat Life Saver"
				class LIB_GER_Stggunner_w					{cost = 50;		requirements[]={};	};	// "Autorifleman"
				class LIB_GER_Scout_sniper_2_w				{cost = 60;		requirements[]={};	};	// "Marksman"
				class LIB_GER_Mgunner_w						{cost = 80;		requirements[]={};	};	// "Heavy Gunner"
				class LIB_GER_LAT_Rifleman_w				{cost = 100;	requirements[]={};	};	// "Rifleman (AT)"
				class LIB_GER_AT_grenadier_w				{cost = 150;	requirements[]={};	};	// "Rifleman (Light AT)"
				class LIB_GER_AT_soldier_w					{cost = 150;	requirements[]={};	};	// "Missile Specialist (AT)"
				class LIB_GER_Recruit_w						{cost = 80;		requirements[]={};	};	// "Sharpshooter"
				class LIB_GER_Scout_sniper_w				{cost = 100;	requirements[]={};	};	// "Sniper"
				//class B_Captain_Dwarden_F					{cost = 150;	requirements[]={};	};	// "Dwarden"
			};
			class Vehicles
			{
				class LIB_Kfz1_Hood_w					{cost = 100;	requirements[]={};	};	// "kubel (Unarmed)"
				class LIB_SdKfz_7_w				        {cost = 200;	requirements[]={};	};	// " Transport"
				class LIB_OpelBlitz_Fuel_w				{cost = 500;	requirements[]={};	};	// " Fuel"
				class LIB_OpelBlitz_Ambulance_w			{cost = 350;	requirements[]={};	};	// " Medical"
				class LIB_Kfz1_MG42_sernyt				{cost = 350;	requirements[]={};	};	// "kubel (HMG)"
				class LIB_DAK_Scout_M3_FFV			    {cost = 200;	requirements[]={};	};	// "scout (HMG)"
				class LIB_OpelBlitz_Parm_w				{cost = 2000;	requirements[]={};	};	// " Repair"
				class LIB_OpelBlitz_Ammo_w				{cost = 3000;	requirements[]={};	};	// " Ammo"
			
				class LIB_SdKfz251_FFV_w				{cost = 1000;	requirements[]={};	};	// "truck 2xHMG"
				class LIB_StuG_III_G_w				    {cost = 3500;	requirements[]={};	};	// "stug spg"
				class LIB_PzKpfwIV_H_w				    {cost = 2200;	requirements[]={};	};	// "panzer4"
				class LIB_PzKpfwV_w				        {cost = 1800;	requirements[]={};	};	// "Panther"
				class LIB_SdKfz_7_AA_w				    {cost = 7000;	requirements[]={};	};	// "AA truck"				
				class LIB_FlakPanzerIV_Wirbelwind_w		{cost = 3000;	requirements[]={};	};	// "AA"
				class LIB_PzKpfwVI_E_w				    {cost = 12000;	requirements[]={};	};	// "Tiger"
				class LIB_PzKpfwVI_B_w				    {cost = 9000;	requirements[]={};	};	// "King tiger"
				class LIB_SdKfz124						{cost = 20000;	requirements[]={};	};	// "Wespe Arty" 
				 
			};
			class Aircraft
			{
				class LIB_Ju87_w					    {cost = 10000;	requirements[]={"A"};	};	// "stuka"
				class LIB_FW190F8_2_w		            {cost = 18000;	requirements[]={"A"};	};	// "choker bird"
				//class B_Plane_Fighter_01_Stealth_F	{cost = 40000;	requirements[]={"A"};	};	// "F/A-181 Black Wasp II Stealth";
				
			};
			class Naval
			{
				class B_Boat_Transport_01_F					{cost = 50001;	requirements[]={"W"};	};	// "Assault Boat"
				class B_Boat_Armed_01_minigun_F				{cost = 50001;	requirements[]={"W"};	};	// "Speedboat Minigun"
				class B_SDV_01_F							{cost = 50001;	requirements[]={"W"};	};	// "SDV"
			};
			class Gear
			{
				class LIB_BasicAmmunitionBox_GER				{cost = 50;		requirements[]={};	};	// "Basic Ammo [NATO]"
				class LIB_BasicWeaponsBox_GER						{cost = 100;	requirements[]={};	};	// "Basic Weapons [NATO]"
				class LIB_Mine_Ammo_Box_Ger					{cost = 300;	requirements[]={};	};	// "Explosives [NATO]"
				class LIB_WeaponsBox_Big_GER					{cost = 600;	requirements[]={};	};	// "Special Weapons [NATO]"
				class Box_NATO_AmmoVeh_F					{cost = 800;	requirements[]={};	};	// "Vehicle Ammo [NATO]"
			};
			class Defences
			{
			    class LIB_MG34_Lafette_low_Deployed		 {cost = 300;	requirements[]={};	};	// "Mk30 HMG .50"
				class LIB_MG34_Lafette_Deployed			 {cost = 400;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class LIB_MG42_Lafette_low_Deployed		 {cost = 550;	requirements[]={};	};	// "Mk32 GMG 20 mm"
				class LIB_MG42_Lafette_Deployed			 {cost = 650;	requirements[]={};	};	// "Mk32 GMG 20 mm (Raised)"
				class LIB_Flakvierling_38_w				 {cost = 300;	requirements[]={};	};	// "Static Titan Launcher (AA) [NATO]"
				class LIB_FlaK_36_w				         {cost = 300;	requirements[]={};	};	// "Static Titan Launcher (AT) [NATO]"
				class LIB_GrWr34_g						 {cost = 6500;	requirements[]={};	};	// "Mortar"
			    class LIB_Nebelwerfer41 				 {cost = 6500;	requirements[]={};	};	// "Mortar"
			};
		};
		class EAST
		{
			class Infantry
			{
				class LIB_SOV_P_officer_w					{cost = 20;		requirements[]={};	};	// "Rifleman"
				class LIB_SOV_Operator_w					{cost = 25;		requirements[]={};	};	// "radio Trooper"
				class LIB_SOV_tank_sergeant 				{cost = 15;		requirements[]={};	};	// "Crewman"
				class LIB_SOV_pilot 						{cost = 10;		requirements[]={};	};	// "Pilot"
				class LIB_SOV_grenadier_w					{cost = 50;		requirements[]={};	};	// "Grenadier"
				class LIB_SOV_Medic_w						{cost = 20;		requirements[]={};	};	// "Combat Life Saver"
				class LIB_SOV_Assault_sergeant_w     		{cost = 50;		requirements[]={};	};	// "Autorifleman"
				class LIB_SOV_scout_atrifle_gunner_w		{cost = 60;		requirements[]={};	};	// "Marksman"
				class LIB_SOV_Assault_mgunner_w				{cost = 80;		requirements[]={};	};	// "Heavy Gunner"
				class LIB_SOV_LAT_Soldier_w					{cost = 100;	requirements[]={};	};	// "Rifleman (AT)"
				class LIB_SOV_AT_soldier_w					{cost = 150;	requirements[]={};	};	// "Viper Rifleman (AT)"
				class LIB_SOV_AT_M1A1_soldier_w				{cost = 150;	requirements[]={};	};	// "Missile Specialist (AT)"
				class LIB_SOV_Scout_sniper_w				{cost = 200;	requirements[]={};	};	// "Rifleman (Heavy AT)"
			};
			class Vehicles
			{
				class LIB_GazM1_SOV_camo_sand			{cost = 100;	requirements[]={};	};	// "Qilin (Unarmed)"
				class LIB_Zis5v_w				        {cost = 200;	requirements[]={};	};	// "Tempest Transport"
				class LIB_Zis5v_fuel_w					{cost = 500;	requirements[]={};	};	// "Tempest Fuel"
				class LIB_Zis5v_med_w					{cost = 350;	requirements[]={};	};	// "Tempest Medical"
				class LIB_SOV_M3_Halftrack_w			{cost = 200;	requirements[]={};	};	// "Offroad (HMG)"
				class LIB_Zis6_parm_w					{cost = 2000;	requirements[]={};	};	// "Tempest Repair"
				class LIB_US6_Ammo						{cost = 3000;	requirements[]={};	};	// "Tempest Ammo"
				
				class LIB_Zis5v_61K			        {cost = 1500;	requirements[]={};	};	// "MSE-3 Marid"
				class LIB_T34_76_w				    {cost = 3700;	requirements[]={};	};	// "BTR-K Kamysh"
				class LIB_SU85_w					{cost = 3000;	requirements[]={};	};	// "ZSU-39 Tigris"
				class LIB_M4A2_SOV_w				{cost = 8000;	requirements[]={};	};	// "T-100 Varsuk"
				class LIB_T34_85_w					{cost = 13000;	requirements[]={};	};	// "T-140 Angara"
				class LIB_JS2_43_w					{cost = 15000;	requirements[]={};	};	// "T-140K Angara"
				class LIB_US6_BM13					{cost = 20000;	requirements[]={};	};	// "2S9 Sochor"

			};
			class Aircraft
			{
				class LIB_Pe2_w		                        {cost = 20000;	requirements[]={"A"};	};	// "To-199 Neophron (CAS)"
				class LIB_P39_w					            {cost = 37000;	requirements[]={"A"};	};	// "To-201 Shikra"
				//class O_Plane_Fighter_02_Stealth_F		{cost = 42000;	requirements[]={"A"};	};	// "To-201 Shikra Stealth"
				
			};
			class Naval
			{
				class O_Boat_Transport_01_F					{cost = 50001;	requirements[]={"W"};	};	// "Assault Boat"
				class O_Boat_Armed_01_hmg_F					{cost = 50001;	requirements[]={"W"};	};	// "Speedboat HMG"
				class O_SDV_01_F							{cost = 50001;	requirements[]={"W"};	};	// "SDV"
			};
			class Gear
			{
				class LIB_BasicAmmunitionBox_SU		    	{cost = 50;		requirements[]={};	};	// "Basic Ammo [CSAT]"
				class LIB_BasicWeaponsBox_SU				{cost = 100;	requirements[]={};	};	// "Basic Weapons [CSAT]"
				class LIB_Mine_Ammo_Box_Su					{cost = 300;	requirements[]={};	};	// "Explosives [CSAT]"
				class LIB_WeaponsBox_Big_SU					{cost = 600;	requirements[]={};	};	// "Special Weapons [CSAT]"
				class LIB_Lone_Big_Box				     	{cost = 600;	requirements[]={};	};	// "Special Weapons [CSAT]"
				class Box_East_AmmoVeh_F					{cost = 800;	requirements[]={};	};	// "Vehicle Ammo [CSAT]"
			};
			class Defences
			{
				class LIB_Maxim_M30_Trench				{cost = 300;	requirements[]={};	};	// "Mk30 HMG .50"
				class LIB_Maxim_M30_base				{cost = 400;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class LIB_61k							{cost = 300;	requirements[]={};	};	// "Static Titan Launcher (AA) [CSAT]"
				class LIB_Zis3_w						{cost = 300;	requirements[]={};	};	// "Static Titan Launcher (AT) [CSAT]"
				class LIB_BM37						    {cost = 6500;	requirements[]={};	};	// "Mortar";
			};
		};
	};
};