//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKSubcredentialProvisioningControllerDelegate-Protocol.h>

@class NPKStandaloneFirstUnlockCoordinator, NPKWatchSubcredentialProvisioningService, NSString, PKAppletSubcredentialSharingSession, PKPaymentService, PKSubcredentialProvisioningController;
@protocol OS_dispatch_queue;

@interface NPKSubcredentialInvitationCoordinator : NSObject <PKSubcredentialProvisioningControllerDelegate>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    PKPaymentService *_paymentService;
    PKSubcredentialProvisioningController *_subcredentialProvisioningController;
    PKAppletSubcredentialSharingSession *_sharingSession;
    CDUnknownBlockType _completion;
    NPKStandaloneFirstUnlockCoordinator *_firstUnlockCoordinator;
    NPKWatchSubcredentialProvisioningService *_subcredentialProvisioningService;
}

+ (_Bool)_canAddSecureElementPassWithConfiguration:(id)arg1;
+ (_Bool)canAddSecureElementPass;
- (void).cxx_destruct;
@property(retain, nonatomic) NPKWatchSubcredentialProvisioningService *subcredentialProvisioningService; // @synthesize subcredentialProvisioningService=_subcredentialProvisioningService;
@property(retain, nonatomic) NPKStandaloneFirstUnlockCoordinator *firstUnlockCoordinator; // @synthesize firstUnlockCoordinator=_firstUnlockCoordinator;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) PKAppletSubcredentialSharingSession *sharingSession; // @synthesize sharingSession=_sharingSession;
@property(retain, nonatomic) PKSubcredentialProvisioningController *subcredentialProvisioningController; // @synthesize subcredentialProvisioningController=_subcredentialProvisioningController;
@property(retain, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)_invokeCompletionWithPassForInvitation:(id)arg1 error:(id)arg2;
- (void)_endProvisioningWithPassForInvitation:(id)arg1 error:(id)arg2;
- (void)_startProvisioningForProvisioningController:(id)arg1 withConfiguration:(id)arg2;
- (id)_errorWithCode:(long long)arg1 message:(id)arg2;
- (void)_performBlockFollowingFirstUnlockWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleProvisioningAttemptForConfiguration:(id)arg1 error:(id)arg2;
- (void)_makeConfigurationForInvitation:(id)arg1 session:(id)arg2 metadata:(id)arg3 paymentWebService:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_fetchInvitationMatchingInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchInvitationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_deviceSupportsSubcredentialProvisioning;
- (_Bool)_isInvitationUniqueForPairedReaderIdentifier:(id)arg1;
- (id)_paymentWebService;
- (void)_setUpSharingSessionWithSubcredentialProvisioningController:(id)arg1;
- (void)_setUpSubcredentialProvisioningController;
- (void)_queue_statusForReceivedInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_statusForSentInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_declineRelatedInvitationsIfNecessaryForInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_removeSharingInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_updateSubcredentialMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_requestSubcredentialInvitation:(id)arg1 fromIDSHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_setAccountAttestationAnonymizationSalt:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_deviceContainsInvitationMatchingInvitation:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_listSubcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_canAcceptInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2;
- (void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2;
- (void)statusForReceivedInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)statusForSentInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)arg1 shouldFetchAnonymizationSaltFromRemoteDevice:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)arg1;
- (void)fetchOrInitializeAccountAttestationAnonymizationSaltIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)declineRelatedInvitationsIfNecessaryForInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeSharingInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateSubcredentialMetadataOnPass:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestSubcredentialInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAccountAttestationAnonymizationSalt:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountAttestationAnonymizationSaltWithCompletion:(CDUnknownBlockType)arg1;
- (void)deviceContainsInvitationMatchingInvitation:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startProvisioningWithInvitation:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startProvisioningWithInvitationIdentifier:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listSubcredentialInvitationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)canAcceptInvitation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCallbackQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

