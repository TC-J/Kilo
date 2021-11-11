project "Kilo"
	kind "SharedLib"
	language "C++"
	cppdialect "C++20"
	systemversion "latest"
	staticruntime "On"
	
	targetdir ("%{wks.location}/target/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/intermediate/" .. outputdir .. "/%{prj.name}")

	files {
		"src/**.cpp",
		"src/**.h"
	}

	includedirs {
		"%{prj.location}/src"
	}

	postbuildcommands {
		("{COPY} %{wks.location}/target/" .. outputdir .. "/%{prj.name} %{wks.location}/target/SandboxApp-%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}/SandboxApp")
	}

	-- Configuration Specific
	filter "configurations:Debug"
		runtime "Debug"
		defines {
			"KILO_DEBUG"
		}
	filter "configurations:Release"
		optimize "on"
		runtime "Release"
		defines {
			"KILO_RELEASE"
		}

	-- Platform Specific
	filter "system:windows"
		staticruntime "On"
		defines {
			"WINDOWS",
			"DLL"
		}
