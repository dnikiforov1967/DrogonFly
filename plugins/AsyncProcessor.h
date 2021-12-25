/**
 *
 *  AsyncProcessor.h
 *
 */

#pragma once

#include <drogon/plugins/Plugin.h>


class AsyncProcessor : public drogon::Plugin<AsyncProcessor>
{
  public:
    AsyncProcessor() {}
    /// This method must be called by drogon to initialize and start the plugin.
    /// It must be implemented by the user.
    virtual void initAndStart(const Json::Value &config) override;

    /// This method must be called by drogon to shutdown the plugin.
    /// It must be implemented by the user.
    virtual void shutdown() override;

    void startTask();
    bool checkTaskStatus();
};

