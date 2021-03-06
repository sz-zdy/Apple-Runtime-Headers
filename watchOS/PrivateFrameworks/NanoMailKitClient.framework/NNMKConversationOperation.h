//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitClient/NSSecureCoding-Protocol.h>

@class NNMKConversation, NNMKMailboxFilter, NSArray, NSIndexSet, NSString;

@interface NNMKConversationOperation : NSObject <NSSecureCoding>
{
    int _type;
    NNMKConversation *_conversation;
    NSString *_conversationId;
    NSArray *_messagesAdded;
    NSIndexSet *_messagesAddedIndexes;
    NSArray *_messagesUpdated;
    NSIndexSet *_messagesUpdatedIndexes;
    NSArray *_messagesDeleted;
    NSIndexSet *_messagesDeletedIndexes;
    NSArray *_messagesUnchanged;
    unsigned int _previousIndex;
    unsigned int _newIndex;
    NNMKMailboxFilter *_mailboxFilter;
}

+ (void)convertUpdateOperationToDeleteOperation:(id)arg1;
+ (void)convertUpdateOperationToAddOperation:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)conversationDeleteOperationForConversationId:(id)arg1 previousIndex:(unsigned int)arg2 messagesDeleted:(id)arg3;
+ (id)conversationUpdateOperationForConversation:(id)arg1 previousIndex:(unsigned int)arg2 newIndex:(unsigned int)arg3 messagesAdded:(id)arg4 messagesAddedIndexes:(id)arg5 messagesUpdated:(id)arg6 messagesUpdatedIndexes:(id)arg7 messagesDeleted:(id)arg8 messagesDeletedIndexes:(id)arg9 messagesUnchanged:(id)arg10;
+ (id)conversationAddOperationForConversation:(id)arg1 index:(unsigned int)arg2 messages:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NNMKMailboxFilter *mailboxFilter; // @synthesize mailboxFilter=_mailboxFilter;
@property(nonatomic) unsigned int newIndex; // @synthesize newIndex=_newIndex;
@property(nonatomic) unsigned int previousIndex; // @synthesize previousIndex=_previousIndex;
@property(retain, nonatomic) NSArray *messagesUnchanged; // @synthesize messagesUnchanged=_messagesUnchanged;
@property(retain, nonatomic) NSIndexSet *messagesDeletedIndexes; // @synthesize messagesDeletedIndexes=_messagesDeletedIndexes;
@property(retain, nonatomic) NSArray *messagesDeleted; // @synthesize messagesDeleted=_messagesDeleted;
@property(retain, nonatomic) NSIndexSet *messagesUpdatedIndexes; // @synthesize messagesUpdatedIndexes=_messagesUpdatedIndexes;
@property(retain, nonatomic) NSArray *messagesUpdated; // @synthesize messagesUpdated=_messagesUpdated;
@property(retain, nonatomic) NSIndexSet *messagesAddedIndexes; // @synthesize messagesAddedIndexes=_messagesAddedIndexes;
@property(retain, nonatomic) NSArray *messagesAdded; // @synthesize messagesAdded=_messagesAdded;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(retain, nonatomic) NNMKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

