workspace "Kilo"
	architecture "x64"
	startproject "SandboxApp"
	configurations ({
		"Debug",
		"Release"
	})

	outputdir = "%{prj.name}-%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	include "Kilo"
	include "SandboxApp"
