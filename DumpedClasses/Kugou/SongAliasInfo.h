//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SongAliasInfo : NSObject
{
    long long _aliasType;
    NSString *_aliasName;
}

@property(retain, nonatomic) NSString *aliasName; // @synthesize aliasName=_aliasName;
@property(nonatomic) long long aliasType; // @synthesize aliasType=_aliasType;
- (void).cxx_destruct;
- (void)dictionaryToModel:(id)arg1;

@end
