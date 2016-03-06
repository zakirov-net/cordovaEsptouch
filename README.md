# cordovaEsptouch
a cordova plugin for Esptouch which smartconfig esp8266
# Install
cordova plugin add https://github.com/lianghuiyuan/cordovaEsptouch.git

# usage
1.esptouchPlugin.smartConfig 

//@apSsid,ssid of the wifi,for example: "wifiName"

//@apBssid,bssid of the wifi,for example "b2:05:2f:92" 

//@apPassword,password of the wifi,for example: "wifiPassword" 

//@isSsidHiddenStr,default "NO"

//@taskResultCountStr,the count of device you want to config,for example:1

esptouchPlugin.smartConfig(apSsid,apBssid,apPassword,isSsidHiddenStr,taskResultCountStr, function(res) {

  alert(res);
  
},function(error){

  console.log(error);
  
});

2.esptouchPlugin.cancelConfig

esptouchPlugin.cancelConfig(function(res) {

	console.log(res);
	
}, function(error) {

		console.log(error);
		
});

#warning 

you must call "esptouchPlugin.cancelConfig" when you want to stop the config,if not it will make some mistake when you call
"esptouchPlugin.smartConfig" the other time.


Since ios emulator does not support the SmartConfig feature,so I did not package the i386 architectures in the "Esptouch.framework".You need to remove i386 architectures in "Build Settings->Architectures" and test your project on a real iphone.
