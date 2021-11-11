
project "SandboxApp"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++20"
	systemversion "latest"

	targetdir ("%{wks.location}/target/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/intermediate/" .. outputdir .. "/%{prj.name}")

	files {
		"src/**.cpp",
		"src/**.h"
	}

	includedirs {
		"%{prj.location}/src",
		"%{wks.location}/Kilo/src"
	}

	libdirs {
		"%{wks.location}/Kilo"
	}

	links {
		"Kilo"
	}

	-- Configuration Specific
	filter "configurations:Debug"
		runtime "Debug"
		defines ("KILO_DEBUG")

	filter "configurations:Release"
		runtime "Release"
		optimize "On"
		defines ("KILO_RELEASE")

	-- Platform Specific
	filter "system:windows"
		staticruntime "On"
		defines {
			"WINDOWS"
		}
