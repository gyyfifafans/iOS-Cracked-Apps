//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableData, NSString, NSTimer, TFESPDYSocketReadOp, TFESPDYSocketWriteOp;

@interface TFESPDYSocket : NSObject
{
    unsigned short _connectedPort;
    NSString *_connectedHost;
    int _socket4FD;
    int _socket6FD;
    struct __CFSocket *_socket4;
    struct __CFSocket *_socket6;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    struct __CFRunLoopSource *_source4;
    struct __CFRunLoopSource *_source6;
    struct __CFRunLoop *_runLoop;
    CDStruct_4210025a _context;
    NSArray *_runLoopModes;
    NSTimer *_connectTimer;
    NSMutableArray *_readQueue;
    TFESPDYSocketReadOp *_currentReadOp;
    NSTimer *_readTimer;
    NSMutableData *_unreadData;
    NSMutableArray *_writeQueue;
    TFESPDYSocketWriteOp *_currentWriteOp;
    NSTimer *_writeTimer;
    id <TFESPDYSocketDelegate> _delegate;
    unsigned short _flags;
}

- (void).cxx_destruct;
- (void)handleCFWriteStreamEvent:(unsigned long long)arg1 forStream:(struct __CFWriteStream *)arg2;
- (void)handleCFReadStreamEvent:(unsigned long long)arg1 forStream:(struct __CFReadStream *)arg2;
- (void)_onTLSHandshakeSuccess;
- (void)_tryTLSHandshake;
- (void)secureWithTLS:(id)arg1;
- (void)_timeoutWrite:(id)arg1;
- (void)_endWrite;
- (void)_finishWrite;
- (void)_write;
- (_Bool)_writeStreamReady;
- (void)_dequeueWrite;
- (void)_scheduleWrite;
- (void)writeData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)_timeoutRead:(id)arg1;
- (void)_endRead;
- (void)_finishRead;
- (void)_read;
- (_Bool)_readStreamReady;
- (void)_dequeueRead;
- (void)_scheduleRead;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 buffer:(id)arg3 bufferOffset:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataToLength:(unsigned long long)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
- (void)readDataWithTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
- (void)readDataWithTimeout:(double)arg1 tag:(long long)arg2;
- (_Bool)isIPv6;
- (_Bool)isIPv4;
- (id)connectedHost;
- (unsigned short)connectedPort;
- (void)_setConnectionProperties;
- (_Bool)_fullyDisconnected;
- (_Bool)connected;
- (id)writeTimeoutError;
- (id)readTimeoutError;
- (id)connectTimeoutError;
- (id)abortError;
- (id)streamError;
- (id)socketError;
- (id)unreadData;
- (void)_scheduleDisconnect;
- (void)disconnectAfterReadsAndWrites;
- (void)disconnectAfterWrites;
- (void)disconnectAfterReads;
- (void)disconnect;
- (void)_close;
- (void)_emptyQueues;
- (void)_captureUnreadData;
- (void)_closeWithError:(id)arg1;
- (_Bool)_setSocketViaStreams:(id *)arg1;
- (void)_onStreamOpened;
- (_Bool)_openStreams:(id *)arg1;
- (_Bool)_configureStreams:(id *)arg1;
- (_Bool)_scheduleStreamsOnRunLoop:(id)arg1 error:(id *)arg2;
- (_Bool)_createStreamsToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (void)_timeoutConnect:(id)arg1;
- (void)_endConnectTimeout;
- (void)_startConnectTimeout:(double)arg1;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 withTimeout:(double)arg3 error:(id *)arg4;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (id)runLoopModes;
- (_Bool)removeRunLoopMode:(id)arg1;
- (_Bool)addRunLoopMode:(id)arg1;
- (_Bool)setRunLoopModes:(id)arg1;
- (_Bool)setRunLoop:(id)arg1;
- (void)_unscheduleWriteStream;
- (void)_unscheduleReadStream;
- (void)_removeTimer:(id)arg1 mode:(id)arg2;
- (void)_addTimer:(id)arg1 mode:(id)arg2;
- (void)_removeTimer:(id)arg1;
- (void)_addTimer:(id)arg1;
- (void)_removeSource:(struct __CFRunLoopSource *)arg1 mode:(id)arg2;
- (void)_addSource:(struct __CFRunLoopSource *)arg1 mode:(id)arg2;
- (void)_removeSource:(struct __CFRunLoopSource *)arg1;
- (void)_addSource:(struct __CFRunLoopSource *)arg1;
- (struct __CFWriteStream *)cfWriteStream;
- (struct __CFReadStream *)cfReadStream;
- (struct __CFSocket *)cfSocket;
@property(nonatomic) __weak id <TFESPDYSocketDelegate> delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

