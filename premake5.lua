workspace "Kilo"
	architecture "x64"
	startproject "SandboxApp"
	configurations ({
		"Debug",
		"Release"
	})

	outputdir = "%{prj.name}-%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	includedirs {
		"Kilo/vendor/imgui",
		"Kilo/vendor/glfw/include"
	}

	include "Kilo/vendor/imgui"
	include "Kilo/vendor/glfw"
	include "Kilo"
	include "SandboxApp"
