using UnrealBuildTool;

public class BachelorThesisSwarm : ModuleRules
{
	public BachelorThesisSwarm(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.Add("Core");
		PrivateDependencyModuleNames.Add("Core");
	}
}
