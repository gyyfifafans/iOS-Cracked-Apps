//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface aluSDK : NSObject
{
    CDUnknownBlockType _loginCallback;
}

+ (_Bool)isCurrentDeviceSupportForgetPassword;
+ (_Bool)isCurrentDeviceSupportRegister;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType loginCallback; // @synthesize loginCallback=_loginCallback;
- (void).cxx_destruct;
- (void)disableRotate2Portrait;
- (void)loginBoxUserChanged:(CDUnknownBlockType)arg1;
- (void)doRegister;
- (void)showH5Page:(id)arg1 url:(id)arg2 delegate:(id)arg3;
- (void)showSsoPage:(id)arg1 t:(id)arg2 euuid:(id)arg3 ssoVersion:(id)arg4 sign:(id)arg5 targetURL:(id)arg6 ext:(id)arg7 userId:(id)arg8 taobaoNick:(id)arg9 headPicLink:(id)arg10 slaveBundleId:(id)arg11;
- (void)setLoginMoreCustomDelegate:(id)arg1;
- (void)doCloseLoginPage;
- (void)doForgetPassword;
- (void)alu_p_initWindVane;
- (id)taobaoLoginViewReferersJSONString;
- (id)taobaoLoginViewReferers;
- (void)clearTBLoginViewReferers;
- (void)addTBLoginViewReferer:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setSafePayTid:(id)arg1;
- (id)getSDKName;
- (id)getVersionNum;
- (id)getSession;
- (void)updateSession:(id)arg1;
- (void)postLoginNotification:(id)arg1;
- (void)getUTDIDAsync:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getUMIDAsync:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getAPDIDAsync:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getUTDIDSync;
- (id)getUMIDSync;
- (id)getDeviceName;
- (id)getDeviceId;
- (id)getAPDIDSync;
- (void)bindAlipayAsync:(id)arg1 bizScene:(id)arg2 signData:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)changePhoneNumAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)bindPhoneNumAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)modifyPasswordAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)retrievePasswordAsync:(id)arg1 callback:(CDUnknownBlockType)arg2 ext:(id)arg3;
- (void)retrievePasswordAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeRegisterObserver:(id)arg1;
- (void)addRegisterObserver:(id)arg1 selector:(SEL)arg2;
- (id)createAlipayAsoHandler;
- (id)createApplyAsoTokenHandler;
- (void)removeLoginObserver:(id)arg1;
- (void)addLoginObserver:(id)arg1 selector:(SEL)arg2;
- (void)logOut;
- (void)ssoLoginAsync:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)navigateToRestigerPage:(id)arg1;
- (void)passwordMockEasyLoginAsync:(id)arg1 userPwd:(id)arg2;
- (void)passwordLoginAsync:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)passwordLoginAsync:(id)arg1;
- (void)alipayLoginAsync:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)passwordLoginAsync:(id)arg1 extraInfo:(id)arg2 loginType:(int)arg3 context:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)loginAsync:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setDisabledLoginPageScroll:(_Bool)arg1;
- (void)closeLoginAnimation:(_Bool)arg1;
- (void)setIsHelpPageOpen:(_Bool)arg1;
- (void)setIsAlipayLoginEntryClosed:(_Bool)arg1;
- (void)setIsRetrivePasswordClosed:(_Bool)arg1;
- (void)setIsRegistryEntryClosed:(_Bool)arg1;
- (void)setIsTaobaoGateWayNeedUnited:(_Bool)arg1;
- (void)deinitialize;
- (_Bool)initDeviceIds;
- (void)initializeAsync:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)applyCustomGateway:(long long)arg1 taobaoGateway:(long long)arg2;
- (void)setNeedInitWindVane:(_Bool)arg1;
- (void)closeLocationManagerInSDK;
- (void)setIsShowSSOToastClosed:(_Bool)arg1;
- (void)setTtid:(id)arg1;
- (id)getAppInfo;
- (void)setMultilanguage:(id)arg1;
- (void)setIsNeedMultilanguage:(_Bool)arg1;
- (void)setSSOTargetURL:(id)arg1;
- (void)setSite:(id)arg1;
- (void)setAppInfo:(id)arg1;
- (void)setAuthCode:(id)arg1;
- (void)setDebugLog:(_Bool)arg1;
- (void)setAppKey:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setUIAppearanceDelegate:(id)arg1;

@end
