workspace "Kilo"
	architecture "x64"
	startproject "SandboxApp"
	configurations ({
		"Debug",
		"Release"
	})

	outputdir = "%{prj.name}-%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

	libdirs {
		"/c/Windows/System32"
	}

	includedirs {
		"Kilo/vendor/imgui",
		"Kilo/vendor/imgui/backends",
		"Kilo/vendor/glfw/include",
		"Kilo/vendor/glad/include"
	}

	include "Kilo/vendor/glfw"
	include "Kilo/vendor/imgui"
	include "Kilo/vendor/glad"
	include "Kilo"
	include "SandboxApp"
