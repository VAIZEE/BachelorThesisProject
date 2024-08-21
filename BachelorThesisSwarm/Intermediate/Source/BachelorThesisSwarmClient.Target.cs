using UnrealBuildTool;

public class BachelorThesisSwarmClientTarget : TargetRules
{
	public BachelorThesisSwarmClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("BachelorThesisSwarm");
	}
}
