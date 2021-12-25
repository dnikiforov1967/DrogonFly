/**
 *
 *  InMemStorage.h
 *
 */

#pragma once

#include <drogon/plugins/Plugin.h>

/**
* 
* This plugin shall simulate the permanent durable storage
* 
*/
class InMemStorage : public drogon::Plugin<InMemStorage>
{
  public:
    InMemStorage() {}

    //Prohibit copy & assignment
    InMemStorage(const InMemStorage&) = delete;
    InMemStorage& operator=(const InMemStorage&) = delete;
    /// This method must be called by drogon to initialize and start the plugin.
    /// It must be implemented by the user.
    virtual void initAndStart(const Json::Value &config) override;

    /// This method must be called by drogon to shutdown the plugin.
    /// It must be implemented by the user.
    virtual void shutdown() override;

    void saveLocation();
    void getLocation();
};

