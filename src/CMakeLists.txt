file(GLOB_RECURSE chr-core-impl CONFIGURE_DEPENDS "*.cxx")
target_sources(chr-core PUBLIC ${chr-core-impl})