// Copyright Tabish

using UnrealBuildTool;
using System.Collections.Generic;

public class BattleTankGameTarget : TargetRules
{
	public BattleTankGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "BattleTankGame" } );
	}
}
