#pragma once

#include "IApplication.hpp"
#include "GfxConfiguration.hpp"

namespace My {
    class BaseApplication : public IApplication
    {
    public:
        BaseApplication(GfxConfiguration& cfg);

        int Initialize() override;
        void Finalize() override;
        void Tick() override;
        bool IsQuit() override;

    protected:
        static bool m_bQuit;
        GfxConfiguration m_Config;

    private:
        BaseApplication() {}
    };
}