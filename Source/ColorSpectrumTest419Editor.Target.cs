// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class ColorSpectrumTest419EditorTarget : TargetRules
{
	public ColorSpectrumTest419EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "ColorSpectrumTest419" } );
	}
}
