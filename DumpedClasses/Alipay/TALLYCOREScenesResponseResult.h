//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TALLYCORECommonResult.h"

@class NSArray, NSString;

@interface TALLYCOREScenesResponseResult : TALLYCORECommonResult
{
    NSString *_sceneCode;
    NSString *_subSceneCode;
    NSArray *_orderList;
}

+ (Class)orderListElementClass;
@property(retain, nonatomic) NSArray *orderList; // @synthesize orderList=_orderList;
@property(retain, nonatomic) NSString *subSceneCode; // @synthesize subSceneCode=_subSceneCode;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
- (void).cxx_destruct;

@end
