//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface H5AutoLogger : NSObject
{
}

+ (_Bool)p_isMatchString:(id)arg1 byRrange:(id)arg2;
+ (_Bool)p_isAllowLogByRange:(id)arg1 appId:(id)arg2 publicId:(id)arg3 url:(id)arg4;
+ (id)p_readDynamicConfigsByLid:(long long)arg1;
+ (void)p_pullDynamicConfigs;
+ (id)p_readPreConfigByLid:(long long)arg1;
+ (id)p_param4FromOptions:(id)arg1;
+ (id)p_targetUrlFromLogStr:(id)arg1;
+ (void)logWithOptions:(id)arg1;
+ (long long)findSeedNumberWithSeedStr:(id)arg1;

@end
