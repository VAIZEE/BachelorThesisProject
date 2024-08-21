using UnrealBuildTool;

public class BachelorThesisSwarmTarget : TargetRules
{
	public BachelorThesisSwarmTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("BachelorThesisSwarm");
	}
}
