using UnrealBuildTool;

public class BachelorThesisSwarmEditorTarget : TargetRules
{
	public BachelorThesisSwarmEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("BachelorThesisSwarm");
	}
}
