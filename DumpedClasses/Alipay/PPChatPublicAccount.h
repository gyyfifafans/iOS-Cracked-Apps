//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString, UIColor;

@interface PPChatPublicAccount : NSObject <NSCoding>
{
    _Bool _canAddExtra;
    _Bool _isFollow;
    _Bool _reportLocation;
    _Bool _isDeletable;
    _Bool _acceptsPush;
    _Bool _canChat;
    _Bool _canUploadGis;
    _Bool _needShowGisSwitch;
    _Bool _needProxy;
    _Bool _isLimitAddThird;
    NSString *_publicId;
    NSString *_publicName;
    NSString *_publicType;
    NSString *_backImageUrl;
    NSString *_headImageUrl;
    UIColor *_baseColor;
    NSString *_followType;
    NSString *_publicDescription;
    NSString *_addThirdAccountUri;
    NSString *_thirdPartyAccountText;
    NSString *_instId;
    NSString *_loginId;
    NSString *_agreementId;
    NSString *_authUrl;
    NSString *_menuKey;
    NSString *_emptyMsgLogo;
    NSString *_emptyMsgDesc;
    NSDictionary *_launchInfoForH5;
    NSString *_queryHistoryButtonName;
    NSString *_queryHistoryButtonUrl;
}

@property(retain, nonatomic) NSString *queryHistoryButtonUrl; // @synthesize queryHistoryButtonUrl=_queryHistoryButtonUrl;
@property(retain, nonatomic) NSString *queryHistoryButtonName; // @synthesize queryHistoryButtonName=_queryHistoryButtonName;
@property(copy) NSDictionary *launchInfoForH5; // @synthesize launchInfoForH5=_launchInfoForH5;
@property(retain, nonatomic) NSString *emptyMsgDesc; // @synthesize emptyMsgDesc=_emptyMsgDesc;
@property(retain, nonatomic) NSString *emptyMsgLogo; // @synthesize emptyMsgLogo=_emptyMsgLogo;
@property(retain, nonatomic) NSString *menuKey; // @synthesize menuKey=_menuKey;
@property(retain, nonatomic) NSString *authUrl; // @synthesize authUrl=_authUrl;
@property(nonatomic) _Bool isLimitAddThird; // @synthesize isLimitAddThird=_isLimitAddThird;
@property(nonatomic) _Bool needProxy; // @synthesize needProxy=_needProxy;
@property(nonatomic) _Bool needShowGisSwitch; // @synthesize needShowGisSwitch=_needShowGisSwitch;
@property(nonatomic) _Bool canUploadGis; // @synthesize canUploadGis=_canUploadGis;
@property(nonatomic) _Bool canChat; // @synthesize canChat=_canChat;
@property(nonatomic) _Bool acceptsPush; // @synthesize acceptsPush=_acceptsPush;
@property(nonatomic) _Bool isDeletable; // @synthesize isDeletable=_isDeletable;
@property(nonatomic) _Bool reportLocation; // @synthesize reportLocation=_reportLocation;
@property(retain, nonatomic) NSString *agreementId; // @synthesize agreementId=_agreementId;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *instId; // @synthesize instId=_instId;
@property(retain, nonatomic) NSString *thirdPartyAccountText; // @synthesize thirdPartyAccountText=_thirdPartyAccountText;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) _Bool canAddExtra; // @synthesize canAddExtra=_canAddExtra;
@property(retain, nonatomic) NSString *addThirdAccountUri; // @synthesize addThirdAccountUri=_addThirdAccountUri;
@property(retain, nonatomic) NSString *publicDescription; // @synthesize publicDescription=_publicDescription;
@property(retain, nonatomic) NSString *followType; // @synthesize followType=_followType;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *backImageUrl; // @synthesize backImageUrl=_backImageUrl;
@property(retain, nonatomic) NSString *publicType; // @synthesize publicType=_publicType;
@property(retain, nonatomic) NSString *publicName; // @synthesize publicName=_publicName;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (void)loadPublicCoreLayoutModel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
