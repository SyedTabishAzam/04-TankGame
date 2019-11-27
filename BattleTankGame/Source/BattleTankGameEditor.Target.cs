// Copyright Tabish

using UnrealBuildTool;
using System.Collections.Generic;

public class BattleTankGameEditorTarget : TargetRules
{
	public BattleTankGameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "BattleTankGame" } );
	}
}
