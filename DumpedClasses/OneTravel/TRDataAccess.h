//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TRDataAccess : NSObject
{
}

+ (void)userDefaultsSynchronize;
+ (void)userDefaultsSetBool:(_Bool)arg1 forKey:(id)arg2;
+ (void)userDefaultsSetFloat:(float)arg1 forKey:(id)arg2;
+ (void)userDefaultsSetInteger:(long long)arg1 forKey:(id)arg2;
+ (void)userDefaultsSetString:(id)arg1 forKey:(id)arg2;
+ (_Bool)userDefaultsBoolForKey:(id)arg1;
+ (float)userDefaultsFloatForKey:(id)arg1;
+ (long long)userDefaultsIntegerForKey:(id)arg1;
+ (id)userDefaultsDataForKey:(id)arg1;
+ (id)userDefaultsStringForKey:(id)arg1;

@end
