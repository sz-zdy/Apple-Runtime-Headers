//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, PKDownload;

@protocol PKDownloadDelegate

@optional
- (void)download:(PKDownload *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 withCompletionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)download:(PKDownload *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)download:(PKDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)downloadDidFinish:(PKDownload *)arg1;
- (void)download:(PKDownload *)arg1 didCheckDataOfLength:(unsigned long long)arg2;
- (void)download:(PKDownload *)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)download:(PKDownload *)arg1 receivedResumeBytesOfLength:(long long)arg2;
- (void)download:(PKDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)download:(PKDownload *)arg1 receiveLogWithLevel:(unsigned long long)arg2 withLogMesage:(NSString *)arg3;
- (NSURLRequest *)download:(PKDownload *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)downloadDidBegin:(PKDownload *)arg1;
@end

