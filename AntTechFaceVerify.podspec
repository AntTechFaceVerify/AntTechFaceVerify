

Pod::Spec.new do |spec|

 

  spec.name         = "AntTechFaceVerify"
  spec.version      = "0.0.1"
  spec.summary      = "可信实人认证提供 iOS 客户端 SDK 帮助您在 App 中实现刷脸认证功能."

  spec.resources = ['*.bundle']
  spec.description  = <<-DESC
TODO: Add long description of the pod here.
                   DESC
  spec.vendored_frameworks  = 'AliyunIdentityManager.framework','AliyunIdentityManager.framework','APBToygerFacade.framework','APPSecuritySDK.framework','BioAuthAPI.framework','BioAuthEngine.framework','MPRemoteLogging.framework','OCRDetectSDKForTech.framework','ToygerService.framework','ZolozIdentityManager.framework','ZolozMobileRPC.framework','ZolozOpenPlatformBuild.framework','ZolozSensorServices.framework','ZolozUtility.framework'
  spec.homepage     = "https://github.com/AntTechFaceVerify/AntTechFaceVerify"
  spec.frameworks     = "CoreGraphics","Accelerate","SystemConfiguration","AssetsLibrary","CoreTelephony","QuartzCore","CoreFoundation","CoreLocation","ImageIO","CoreMedia","CoreMotion","AVFoundation","WebKit","AudioToolbox","CFNetwork","MobileCoreServices","AdSupport"
  spec.libraries   = "resolv","z","c++.1","c++abi","z.1.2.8"
  spec.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  spec.license          = { :type => 'MIT', :file => 'LICENSE' }
  spec.author           = { 'AntTechFaceVerify' => 'AntTechFaceVerify@cloud.alipay.com' }
  spec.source           = { :git => 'https://github.com/AntTechFaceVerify/AntTechFaceVerify', :tag => "#{spec.version}" }


  spec.ios.deployment_target = '9.0'


 

end
