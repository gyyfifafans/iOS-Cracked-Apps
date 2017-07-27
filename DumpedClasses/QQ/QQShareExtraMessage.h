//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableString, NSString;

@interface QQShareExtraMessage : NSObject <NSXMLParserDelegate>
{
    int _bizType;
    int _action;
    NSString *_digestText;
    NSString *_message;
    NSString *_elementName;
    NSMutableString *_elementText;
    int _xo;
}

- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parseFromXmlMessage:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) int bizType; // @dynamic bizType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *digestText; // @dynamic digestText;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(readonly) Class superclass;

@end
