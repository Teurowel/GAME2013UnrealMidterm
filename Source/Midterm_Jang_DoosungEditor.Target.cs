// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Midterm_Jang_DoosungEditorTarget : TargetRules
{
	public Midterm_Jang_DoosungEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Midterm_Jang_Doosung");
	}
}
