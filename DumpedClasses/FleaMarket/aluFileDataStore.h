//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDataStore.h"

@class NSString;

@interface aluFileDataStore : NSObject <IDataStore>
{
    NSString *_directoryPath;
}

@property(readonly, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
- (void).cxx_destruct;
- (id)filePathOfIndentity:(id)arg1;
- (void)removeObjectWithIdentity:(id)arg1;
- (_Bool)readObject:(id *)arg1 identity:(id)arg2;
- (_Bool)writeObject:(id)arg1 identity:(id)arg2;
- (id)initWithDirectoryPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

