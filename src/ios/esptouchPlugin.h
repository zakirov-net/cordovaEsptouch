#import <Cordova/CDVPlugin.h>
#import <Cordova/CDVPluginResult.h>
//#import <Esptouch/ESPTouchTask.h>
//#import <Esptouch/ESPTouchResult.h>
//#import <Esptouch/ESP_NetUtil.h>
//#import <Esptouch/ESPTouchDelegate.h>
#import <Esptouch/Esptouch.h>



@interface esptouchPlugin : CDVPlugin
@property (nonatomic, strong) NSCondition *_condition;
@property (atomic, strong) ESPTouchTask *_esptouchTask;

- (void)smartConfig:(CDVInvokedUrlCommand*)command;

- (void)cancelConfig:(CDVInvokedUrlCommand*)command;

@end
