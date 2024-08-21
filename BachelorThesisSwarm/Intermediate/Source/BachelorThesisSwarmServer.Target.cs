using UnrealBuildTool;

public class BachelorThesisSwarmServerTarget : TargetRules
{
	public BachelorThesisSwarmServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("BachelorThesisSwarm");
	}
}
