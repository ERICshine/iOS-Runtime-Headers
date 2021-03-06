/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLActiveTransaction, NSDictionary, NSUUID;

@interface MLTemplatedDatabaseOperation : MLLibraryOperation {
    NSDictionary *_attributes;
    MLActiveTransaction *_transaction;
    unsigned int _type;
    NSUUID *_uuid;
}

@property(retain) NSDictionary * attributes;
@property(retain) MLActiveTransaction * transaction;
@property(readonly) unsigned int type;
@property(readonly) NSUUID * uuid;

+ (id)databaseOperationForType:(unsigned int)arg1 withTransaction:(id)arg2 library:(id)arg3;

- (void).cxx_destruct;
- (id)_operationTypeDescription;
- (BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1;
- (id)attributes;
- (id)description;
- (id)initWithLibrary:(id)arg1 transaction:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;
- (unsigned int)type;
- (id)uuid;

@end
