//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSDictionary, NSString;

@interface TMMarketComponentHotSellTabItemModel : TMMarketComponentBaseModel
{
    _Bool _isSelected;
    _Bool _isHot;
    NSString *_iconfont;
    NSString *_name;
    NSDictionary *_query;
}

@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *iconfont; // @synthesize iconfont=_iconfont;
- (void).cxx_destruct;
- (id)bannerId;
- (id)initWithDictionary:(id)arg1;

@end

