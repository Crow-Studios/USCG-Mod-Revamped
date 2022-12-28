		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliCom";
			};
		};
		class Reflectors
		{
			class Light1
			{
				color[]={300,300,300};
				ambient[]={30,30,30};
				position="Light1";
				direction="Light1_end";
				hitpoint="Light1";
				selection="Light1";
				size=1;
				innerAngle=1.5;
				outerAngle=4;
				coneFadeCoef=5;
				intensity=1000;
				useFlare=0;
				dayLight=1;
				flareSize=0;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.0099999998;
					hardLimitStart=800;
					hardLimitEnd=1000;
				};
			};
			class Light2
			{
				color[]={1000,1000,1200};
				ambient[]={30,30,30};
				position="Light2";
				direction="Light2_end";
				hitpoint="Light2";
				selection="Light2";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.050000001;
					hardLimitStart=400;
					hardLimitEnd=450;
				};
			};
			class Light3: Light2
			{
				position="Light3";
				direction="Light3_end";
				hitpoint="Light3";
				selection="Light3";
			};
			class Light4: Light2
			{
				position="Light4";
				direction="Light4_end";
				hitpoint="Light4";
				selection="Light4";
			};
			class Light5: Light1
			{
				innerAngle=22;
				outerAngle=90;
				coneFadeCoef=1;
				intensity=1;
				useFlare=1;
				flareSize=10;
				flareMaxDistance=1000;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=800;
					hardLimitEnd=1000;
				};
			};
		};
		class MarkerLights
		{
			class Solid_Red1
			{
				color[]={1,0,0};
				ambient[]={0.5,0,0};
				intensity=75;
				name="Solid_Red1_pos";
				activeLight=1;
				blinking=0;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=1;
				blinkingStartsOn=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class Solid_White1: Solid_Red1
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="Solid_White1_pos";
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class Solid_Green1: Solid_Red1
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="Solid_Green1_pos";
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
			class Blinking_Red1: Solid_Red1
			{
				name="Blinking_Red1_pos";
				blinking=1;
				blinkingPattern[]={1,2};
				blinkingPatternGuarantee=1;
				drawLightSize=0.40000001;
				drawLightCenterSize=0.079999998;
			};
			class Blinking_Red2: Blinking_Red1
			{
				name="Blinking_Red2_pos";
				blinkingPattern[]={0.050000001,0.1,0.050000001,1};
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=1.5;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=1.5;
				};
			};
		};
		class TransportItems
		{
			class _xx_Rebreather
			{
				name="V_RebreatherB";
				count=2;
			};
			class _xx_Diving
			{
				name="G_Diving";
				count=2;
			};
			class _xx_Swimsuit
			{
				name="USCG_Uniform_Swimmer";
				count=2;
			};
		};