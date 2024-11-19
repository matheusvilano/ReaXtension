// Copyright 2024 Matheus Vilano
// SPDX-License-Identifier: Apache-2.0

#define REAPERAPI_IMPLEMENT

#include "reaper_plugin.h"

extern "C"
{
    /// Reaper entry point.
    /// \param hInstance The Reaper plugin instance.
    /// \param rec The Reaper plugin info (records).
    /// \return Whether the initialization failed (0) or succeeded (1).
    REAPER_PLUGIN_DLL_EXPORT int REAPER_PLUGIN_ENTRYPOINT(REAPER_PLUGIN_HINSTANCE hInstance, reaper_plugin_info_t *rec)
    {
        if (!rec) return 0;  // Failure.

        // Your initialization code goes here.

        return 1;  // Success.
    }
}
