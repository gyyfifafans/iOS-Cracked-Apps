//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMMetaItemDO.h"

@class FMHomeTemplateDO, FMHomeThemeDO, NSArray, NSString;

@interface FMHomeItemDO : FMMetaItemDO
{
    NSString *_upperTitle;
    NSString *_downTitle;
    long long _homeType;
    NSString *_missionsUrl;
    NSArray *_homeFishpondDOs;
    NSArray *_bannerDOs;
    FMHomeThemeDO *_themeDO;
    FMHomeTemplateDO *_templateDO;
    NSArray *_keywordDOs;
}

@property(copy, nonatomic) NSArray *keywordDOs; // @synthesize keywordDOs=_keywordDOs;
@property(retain, nonatomic) FMHomeTemplateDO *templateDO; // @synthesize templateDO=_templateDO;
@property(retain, nonatomic) FMHomeThemeDO *themeDO; // @synthesize themeDO=_themeDO;
@property(copy, nonatomic) NSArray *bannerDOs; // @synthesize bannerDOs=_bannerDOs;
@property(copy, nonatomic) NSArray *homeFishpondDOs; // @synthesize homeFishpondDOs=_homeFishpondDOs;
@property(copy, nonatomic) NSString *missionsUrl; // @synthesize missionsUrl=_missionsUrl;
@property(nonatomic) long long homeType; // @synthesize homeType=_homeType;
@property(copy, nonatomic) NSString *downTitle; // @synthesize downTitle=_downTitle;
@property(copy, nonatomic) NSString *upperTitle; // @synthesize upperTitle=_upperTitle;
- (void).cxx_destruct;

@end
