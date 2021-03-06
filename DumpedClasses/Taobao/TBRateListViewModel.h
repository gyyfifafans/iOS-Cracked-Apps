//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMagicCubeComponentMeta.h"

@class NSDictionary, NSString;

@interface TBRateListViewModel : TBMagicCubeComponentMeta
{
    NSString *_itemId;
    NSString *_expression;
    NSString *_navBgColor;
    NSString *_eventToken;
    NSString *_shopId;
    NSString *_sellId;
    NSDictionary *_askInfo;
    NSDictionary *_tagsInfo;
}

@property(retain, nonatomic) NSDictionary *tagsInfo; // @synthesize tagsInfo=_tagsInfo;
@property(retain, nonatomic) NSDictionary *askInfo; // @synthesize askInfo=_askInfo;
@property(retain, nonatomic) NSString *sellId; // @synthesize sellId=_sellId;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
@property(copy, nonatomic) NSString *navBgColor; // @synthesize navBgColor=_navBgColor;
@property(copy, nonatomic) NSString *expression; // @synthesize expression=_expression;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)initWithDetailModel:(id)arg1;

@end

