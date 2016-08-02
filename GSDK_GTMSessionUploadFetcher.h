//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSDK_GTMSessionFetcher.h"

@class NSData, NSDictionary, NSFileHandle, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLRequest;

@interface GSDK_GTMSessionUploadFetcher : GSDK_GTMSessionFetcher
{
    GSDK_GTMSessionFetcher *_chunkFetcher;
    id _delegateCompletionHandler;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    long long _initialBodyLength;
    long long _initialBodySent;
    NSURL *_uploadLocationURL;
    NSData *_uploadData;
    NSFileHandle *_uploadFileHandle;
    id _uploadDataProvider;
    long long _uploadFileLength;
    NSString *_uploadMIMEType;
    long long _chunkSize;
    long long _uploadGranularity;
    _Bool _isPaused;
    _Bool _isRestartedUpload;
    _Bool _shouldInitiateOffsetQuery;
    _Bool _useBackgroundSessionOnChunkFetchers;
    long long _currentOffset;
    NSDictionary *_recentChunkReponseHeaders;
    long long _recentChunkStatusCode;
    GSDK_GTMSessionFetcher *_fetcherInFlight;
    _Bool _isSubdataGenerating;
    _Bool _subdataGenerating;
    NSURL *_uploadFileURL;
    NSURLRequest *_lastChunkRequest;
}

+ (void)load;
+ (void)removePointer:(void *)arg1 fromPointerArray:(id)arg2;
+ (id)uploadFetcherForSessionIdentifier:(id)arg1;
+ (id)uploadFetcherForSessionIdentifierMetadata:(id)arg1;
+ (id)uploadFetcherPointerArrayForBackgroundSessions;
+ (id)uploadFetcherWithLocation:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 fetcherService:(id)arg4;
+ (id)uploadFetcherWithRequest:(id)arg1 fetcherService:(id)arg2;
+ (id)uploadFetcherWithRequest:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3 fetcherService:(id)arg4;
+ (id)uploadFetchersForBackgroundSessions;
+ (unsigned long long)uploadStatusFromResponseHeaders:(id)arg1;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
@property(readonly) GSDK_GTMSessionFetcher *activeFetcher; // @dynamic activeFetcher;
- (void)attachSendProgressBlockToChunkFetcher:(id)arg1;
- (void)beginChunkFetcher:(id)arg1 offset:(long long)arg2;
- (void)beginChunkFetches;
- (void)beginFetchWithCompletionHandler:(id)arg1;
- (_Bool)canFetchWithBackgroundSession;
@property(retain) GSDK_GTMSessionFetcher *chunkFetcher; // @synthesize chunkFetcher=_chunkFetcher;
- (void)chunkFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
@property long long chunkSize; // @synthesize chunkSize=_chunkSize;
@property long long currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // @synthesize delegateCallbackQueue=_delegateCallbackQueue;
@property(readonly) id delegateCompletionHandler; // @synthesize delegateCompletionHandler=_delegateCompletionHandler;
- (void)destroyChunkFetcher;
@property(retain) GSDK_GTMSessionFetcher *fetcherInFlight; // @dynamic fetcherInFlight;
- (long long)fullUploadLength;
- (void)generateChunkSubdataFromFileHandle:(id)arg1 offset:(long long)arg2 length:(long long)arg3 response:(id)arg4;
- (void)generateChunkSubdataFromFileURL:(id)arg1 offset:(long long)arg2 length:(long long)arg3 response:(id)arg4;
- (void)generateChunkSubdataWithOffset:(long long)arg1 length:(long long)arg2 response:(id)arg3;
- (long long)initialBodyLength;
- (long long)initialBodySent;
- (void)invokeDelegateWithDidSendBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)invokeFinalCallbackWithData:(id)arg1 error:(id)arg2 shouldInvalidateLocation:(_Bool)arg3;
- (_Bool)isPaused;
- (_Bool)isRestartedUpload;
@property(getter=isSubdataGenerating) _Bool subdataGenerating; // @synthesize subdataGenerating=_subdataGenerating;
@property(retain) NSURLRequest *lastChunkRequest; // @synthesize lastChunkRequest=_lastChunkRequest;
- (void)pauseFetching;
- (id)prematureFailureErrorWithUserInfo:(id)arg1;
- (void)queryFetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (void)releaseUploadAndBaseCallbacks;
@property(retain) NSDictionary *responseHeaders; // @dynamic responseHeaders;
- (void)resumeFetching;
- (void)retrieveUploadChunkGranularityFromResponseHeaders:(id)arg1;
- (void)sendCancelUploadWithFetcherProperties:(id)arg1;
- (void)sendQueryForUploadOffsetWithFetcherProperties:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDelegateCallbackQueue:(id)arg1;
- (void)setInitialBodyLength:(long long)arg1;
- (void)setInitialBodySent:(long long)arg1;
- (void)setLocationURL:(id)arg1 uploadMIMEType:(id)arg2 chunkSize:(long long)arg3;
@property _Bool shouldInitiateOffsetQuery; // @synthesize shouldInitiateOffsetQuery=_shouldInitiateOffsetQuery;
@property long long statusCode; // @dynamic statusCode;
@property(retain) NSData *uploadData; // @synthesize uploadData=_uploadData;
- (void)setUploadDataLength:(long long)arg1 provider:(id)arg2;
@property(retain) NSFileHandle *uploadFileHandle; // @synthesize uploadFileHandle=_uploadFileHandle;
- (void)setUploadFileLength:(long long)arg1;
@property(retain) NSURL *uploadFileURL; // @synthesize uploadFileURL=_uploadFileURL;
@property long long uploadGranularity; // @synthesize uploadGranularity=_uploadGranularity;
@property(retain) NSURL *uploadLocationURL; // @synthesize uploadLocationURL=_uploadLocationURL;
@property(copy) NSString *uploadMIMEType; // @synthesize uploadMIMEType=_uploadMIMEType;
- (void)setUseBackgroundSession:(_Bool)arg1;
- (void)setupRequestHeaders;
- (_Bool)shouldReleaseCallbacksUponCompletion;
- (long long)statusCodeUnsynchronized;
- (void)stopFetchReleasingCallbacks:(_Bool)arg1;
- (void)stopFetching;
- (id)uploadChunkUnavailableErrorWithDescription:(id)arg1;
@property(readonly, copy) id uploadDataProvider;
- (id)uploadFetcherWithProperties:(id)arg1 isQueryFetch:(_Bool)arg2;
- (void)uploadNextChunkWithOffset:(long long)arg1;
- (void)uploadNextChunkWithOffset:(long long)arg1 fetcherProperties:(id)arg2;
- (id)uploadSessionIdentifierMetadata;
- (_Bool)useBackgroundSession;
- (_Bool)waitForCompletionWithTimeout:(double)arg1;

@end

