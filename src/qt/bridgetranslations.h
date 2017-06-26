#ifndef BRIDGETRANSLATIONS_H
#define BRIDGETRANSLATIONS_H
#include <QObject>

// Get strings in debug console `dumpStrings()`
// TODO: Automate this process, move into include and generate include...
static const char *html_strings[] = {
QT_TRANSLATE_NOOP("PeopleBridge", "Overview"),
QT_TRANSLATE_NOOP("PeopleBridge", "Wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "Send"),
QT_TRANSLATE_NOOP("PeopleBridge", "Receive"),
QT_TRANSLATE_NOOP("PeopleBridge", "Transactions"),
QT_TRANSLATE_NOOP("PeopleBridge", "Address Book"),
QT_TRANSLATE_NOOP("PeopleBridge", "Chat"),
QT_TRANSLATE_NOOP("PeopleBridge", "Notifications"),
QT_TRANSLATE_NOOP("PeopleBridge", "Options"),
QT_TRANSLATE_NOOP("PeopleBridge", "Wallet Management"),
QT_TRANSLATE_NOOP("PeopleBridge", "Add New Wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "Import Wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "Advanced"),
QT_TRANSLATE_NOOP("PeopleBridge", "Backup"),
QT_TRANSLATE_NOOP("PeopleBridge", "Backup Wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "Encrypt Wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "Change Passphrase"),
QT_TRANSLATE_NOOP("PeopleBridge", "(Un)lock Wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "Tools"),
QT_TRANSLATE_NOOP("PeopleBridge", "Chain Data"),
QT_TRANSLATE_NOOP("PeopleBridge", "Block Explorer"),
QT_TRANSLATE_NOOP("PeopleBridge", "Sign Message"),
QT_TRANSLATE_NOOP("PeopleBridge", "Verify Message"),
QT_TRANSLATE_NOOP("PeopleBridge", "Debug"),
QT_TRANSLATE_NOOP("PeopleBridge", "About People"),
QT_TRANSLATE_NOOP("PeopleBridge", "About QT"),
QT_TRANSLATE_NOOP("PeopleBridge", "QR code"),
QT_TRANSLATE_NOOP("PeopleBridge", "Address:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Label:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Narration:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Amount:"),
QT_TRANSLATE_NOOP("PeopleBridge", "MEN"),
QT_TRANSLATE_NOOP("PeopleBridge", "WOMEN"),
QT_TRANSLATE_NOOP("PeopleBridge", "µMEN"),
QT_TRANSLATE_NOOP("PeopleBridge", "Peopleshi"),
QT_TRANSLATE_NOOP("PeopleBridge", "Add new receive address"),
QT_TRANSLATE_NOOP("PeopleBridge", "Normal"),
QT_TRANSLATE_NOOP("PeopleBridge", "Stealth"),
QT_TRANSLATE_NOOP("PeopleBridge", "BIP32"),
QT_TRANSLATE_NOOP("PeopleBridge", "Add Address"),
QT_TRANSLATE_NOOP("PeopleBridge", "Add a new contact"),
QT_TRANSLATE_NOOP("PeopleBridge", "Address Lookup"),
QT_TRANSLATE_NOOP("PeopleBridge", "Address Type"),
QT_TRANSLATE_NOOP("PeopleBridge", "Group"),
QT_TRANSLATE_NOOP("PeopleBridge", "Label"),
QT_TRANSLATE_NOOP("PeopleBridge", "Address"),
QT_TRANSLATE_NOOP("PeopleBridge", "Public Key"),
QT_TRANSLATE_NOOP("PeopleBridge", "Transaction Hash"),
QT_TRANSLATE_NOOP("PeopleBridge", "Recent Transactions"),
QT_TRANSLATE_NOOP("PeopleBridge", "Market"),
QT_TRANSLATE_NOOP("PeopleBridge", "Advanced Options"),
QT_TRANSLATE_NOOP("PeopleBridge", "Coin Control"),
QT_TRANSLATE_NOOP("PeopleBridge", "Make payment"),
QT_TRANSLATE_NOOP("PeopleBridge", "Balance transfer"),
QT_TRANSLATE_NOOP("PeopleBridge", "Select Inputs"),
QT_TRANSLATE_NOOP("PeopleBridge", "Automatically selected"),
QT_TRANSLATE_NOOP("PeopleBridge", "Quantity:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Fee:"),
QT_TRANSLATE_NOOP("PeopleBridge", "After Fee:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Bytes:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Priority:"),
QT_TRANSLATE_NOOP("PeopleBridge", "LowOutput:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Change:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Custom change address"),
QT_TRANSLATE_NOOP("PeopleBridge", "From account"),
QT_TRANSLATE_NOOP("PeopleBridge", "PUBLIC"),
QT_TRANSLATE_NOOP("PeopleBridge", "PRIVATE"),
QT_TRANSLATE_NOOP("PeopleBridge", "Balance:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Ring Size:"),
QT_TRANSLATE_NOOP("PeopleBridge", "To account"),
QT_TRANSLATE_NOOP("PeopleBridge", "Pay to"),
QT_TRANSLATE_NOOP("PeopleBridge", "Narration"),
QT_TRANSLATE_NOOP("PeopleBridge", "Amount"),
QT_TRANSLATE_NOOP("PeopleBridge", "Default Stealth Address"),
QT_TRANSLATE_NOOP("PeopleBridge", "Add Recipient"),
QT_TRANSLATE_NOOP("PeopleBridge", "Clear All"),
QT_TRANSLATE_NOOP("PeopleBridge", "Suggest Ring Size"),
QT_TRANSLATE_NOOP("PeopleBridge", "Send Payment"),
QT_TRANSLATE_NOOP("PeopleBridge", "RECEIVE"),
QT_TRANSLATE_NOOP("PeopleBridge", "Filter by type.."),
QT_TRANSLATE_NOOP("PeopleBridge", "Type"),
QT_TRANSLATE_NOOP("PeopleBridge", "Show QR Code"),
QT_TRANSLATE_NOOP("PeopleBridge", "New Address"),
QT_TRANSLATE_NOOP("PeopleBridge", "Copy Address"),
QT_TRANSLATE_NOOP("PeopleBridge", "TRANSACTIONS"),
QT_TRANSLATE_NOOP("PeopleBridge", "Date"),
QT_TRANSLATE_NOOP("PeopleBridge", "ADDRESSBOOK"),
QT_TRANSLATE_NOOP("PeopleBridge", "Delete"),
QT_TRANSLATE_NOOP("PeopleBridge", "Start Private Conversation"),
QT_TRANSLATE_NOOP("PeopleBridge", "Name:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Public Key:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Start Conversation"),
QT_TRANSLATE_NOOP("PeopleBridge", "Choose identity"),
QT_TRANSLATE_NOOP("PeopleBridge", "Identity:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Start Group Conversation"),
QT_TRANSLATE_NOOP("PeopleBridge", "Group name:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Create Group"),
QT_TRANSLATE_NOOP("PeopleBridge", "Invite others"),
QT_TRANSLATE_NOOP("PeopleBridge", "Search"),
QT_TRANSLATE_NOOP("PeopleBridge", "Invite others to group"),
QT_TRANSLATE_NOOP("PeopleBridge", "Invite to Group"),
QT_TRANSLATE_NOOP("PeopleBridge", "Invite"),
QT_TRANSLATE_NOOP("PeopleBridge", "GROUP"),
QT_TRANSLATE_NOOP("PeopleBridge", "BOOK"),
QT_TRANSLATE_NOOP("PeopleBridge", "Start private conversation"),
QT_TRANSLATE_NOOP("PeopleBridge", "Start group conversation"),
QT_TRANSLATE_NOOP("PeopleBridge", "CHAT"),
QT_TRANSLATE_NOOP("PeopleBridge", "Leave Group"),
QT_TRANSLATE_NOOP("PeopleBridge", "CHAIN DATA"),
QT_TRANSLATE_NOOP("PeopleBridge", "Coin Value"),
QT_TRANSLATE_NOOP("PeopleBridge", "Owned (Mature)"),
QT_TRANSLATE_NOOP("PeopleBridge", "System (Mature)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Spends"),
QT_TRANSLATE_NOOP("PeopleBridge", "Least Depth"),
QT_TRANSLATE_NOOP("PeopleBridge", "BLOCK EXPLORER"),
QT_TRANSLATE_NOOP("PeopleBridge", "Refresh"),
QT_TRANSLATE_NOOP("PeopleBridge", "Hash"),
QT_TRANSLATE_NOOP("PeopleBridge", "Height"),
QT_TRANSLATE_NOOP("PeopleBridge", "Timestamp"),
QT_TRANSLATE_NOOP("PeopleBridge", "Value Out"),
QT_TRANSLATE_NOOP("PeopleBridge", "OPTIONS"),
QT_TRANSLATE_NOOP("PeopleBridge", "Main"),
QT_TRANSLATE_NOOP("PeopleBridge", "Network"),
QT_TRANSLATE_NOOP("PeopleBridge", "Window"),
QT_TRANSLATE_NOOP("PeopleBridge", "Display"),
QT_TRANSLATE_NOOP("PeopleBridge", "I2P"),
QT_TRANSLATE_NOOP("PeopleBridge", "Tor"),
QT_TRANSLATE_NOOP("PeopleBridge", "Start People on system login"),
QT_TRANSLATE_NOOP("PeopleBridge", "Detach databases at shutdown"),
QT_TRANSLATE_NOOP("PeopleBridge", "Pay transaction fee:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Optional transaction fee per kB that helps make sure your transactions are processed quickly."),
QT_TRANSLATE_NOOP("PeopleBridge", "Most transactions are 1kB. Fee 0.01 recommended."),
QT_TRANSLATE_NOOP("PeopleBridge", "Enable Staking"),
QT_TRANSLATE_NOOP("PeopleBridge", "Reserve:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Reserved amount does not participate in staking and is therefore spendable at any time."),
QT_TRANSLATE_NOOP("PeopleBridge", "Minimum Stake Interval"),
QT_TRANSLATE_NOOP("PeopleBridge", "Minimum Ring size:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Maximum Ring size:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Automatically select ring size"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enable Secure messaging"),
QT_TRANSLATE_NOOP("PeopleBridge", "Thin Mode (Requires Restart)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Thin Full Index"),
QT_TRANSLATE_NOOP("PeopleBridge", "Thin Index Window"),
QT_TRANSLATE_NOOP("PeopleBridge", "Map port using UPnP"),
QT_TRANSLATE_NOOP("PeopleBridge", "Connect through SOCKS proxy:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Details"),
QT_TRANSLATE_NOOP("PeopleBridge", "Proxy IP:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Port:"),
QT_TRANSLATE_NOOP("PeopleBridge", "SOCKS Version:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Minimize to the tray instead of the taskbar"),
QT_TRANSLATE_NOOP("PeopleBridge", "Minimize on close"),
QT_TRANSLATE_NOOP("PeopleBridge", "User Interface language:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Unit to show amounts in:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Rows per page:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Display addresses in transaction list"),
QT_TRANSLATE_NOOP("PeopleBridge", "Notifications:"),
QT_TRANSLATE_NOOP("PeopleBridge", "Visible Transaction Types:"),
QT_TRANSLATE_NOOP("PeopleBridge", "I2P (coming soon)"),
QT_TRANSLATE_NOOP("PeopleBridge", "TOR (coming soon)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Cancel"),
QT_TRANSLATE_NOOP("PeopleBridge", "Apply"),
QT_TRANSLATE_NOOP("PeopleBridge", "Ok"),
QT_TRANSLATE_NOOP("PeopleBridge", "Lets create a New Wallet and Account to get you started!"),
QT_TRANSLATE_NOOP("PeopleBridge", "Wallet Name"),
QT_TRANSLATE_NOOP("PeopleBridge", "Password"),
QT_TRANSLATE_NOOP("PeopleBridge", "Add an optional Password to secure the Recovery Phrase (shown on next page)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Would you like to create a Multi-Account HD Key? (BIP44)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Language"),
QT_TRANSLATE_NOOP("PeopleBridge", "English"),
QT_TRANSLATE_NOOP("PeopleBridge", "French"),
QT_TRANSLATE_NOOP("PeopleBridge", "Japanese"),
QT_TRANSLATE_NOOP("PeopleBridge", "Spanish"),
QT_TRANSLATE_NOOP("PeopleBridge", "Chinese (Simplified)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Chinese (Traditional)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Next Step"),
QT_TRANSLATE_NOOP("PeopleBridge", "Write your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("PeopleBridge", "Recovery Phrase"),
QT_TRANSLATE_NOOP("PeopleBridge", "Important!"),
QT_TRANSLATE_NOOP("PeopleBridge", "You need the Wallet Recovery Phrase to restore this wallet. Write it down and keep them somewhere safe.\n\
                                                          You will be asked to confirm the Wallet Recovery Phrase in the next screen to ensure you have written it down correctly"),
QT_TRANSLATE_NOOP("PeopleBridge", "Back"),
QT_TRANSLATE_NOOP("PeopleBridge", "Please confirm your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("PeopleBridge", "Congratulations! You have successfully created a New Wallet and Account"),
QT_TRANSLATE_NOOP("PeopleBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password (if set) safe in case you ever need to recover your wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "Lets import your Wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "The Wallet Recovery Phrase could require a password to be imported"),
QT_TRANSLATE_NOOP("PeopleBridge", "Is this a Multi-Account HD Key (BIP44)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Recovery Phrase (Usually 24 words)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Congratulations! You have successfully imported your Wallet from your Recovery Phrase"),
QT_TRANSLATE_NOOP("PeopleBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password safe in case you ever need to recover your wallet again!"),
QT_TRANSLATE_NOOP("PeopleBridge", "Accounts"),
QT_TRANSLATE_NOOP("PeopleBridge", "ID"),
QT_TRANSLATE_NOOP("PeopleBridge", "Name"),
QT_TRANSLATE_NOOP("PeopleBridge", "Created"),
QT_TRANSLATE_NOOP("PeopleBridge", "Active Account"),
QT_TRANSLATE_NOOP("PeopleBridge", "Default"),
QT_TRANSLATE_NOOP("PeopleBridge", "Wallet Keys"),
QT_TRANSLATE_NOOP("PeopleBridge", "Path"),
QT_TRANSLATE_NOOP("PeopleBridge", "Active"),
QT_TRANSLATE_NOOP("PeopleBridge", "Master"),
QT_TRANSLATE_NOOP("PeopleBridge", "Make Default"),
QT_TRANSLATE_NOOP("PeopleBridge", "Activate/Deactivate"),
QT_TRANSLATE_NOOP("PeopleBridge", "Set as Master"),
QT_TRANSLATE_NOOP("PeopleBridge", "Tor connection offline"),
QT_TRANSLATE_NOOP("PeopleBridge", "i2p connection offline"),
QT_TRANSLATE_NOOP("PeopleBridge", "Wallet is encrypted and currently locked"),
QT_TRANSLATE_NOOP("PeopleBridge", "Not staking because wallet is offline"),
QT_TRANSLATE_NOOP("PeopleBridge", "0 active connections to PeopleCoin network"),
QT_TRANSLATE_NOOP("PeopleBridge", "Wallet is syncing"),
QT_TRANSLATE_NOOP("PeopleBridge", "Open chat list"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a label for this address to add it to your address book"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a address to add it to your address book"),
QT_TRANSLATE_NOOP("PeopleBridge", "Inputs"),
QT_TRANSLATE_NOOP("PeopleBridge", "Values"),
QT_TRANSLATE_NOOP("PeopleBridge", "Outputs"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a PeopleCash address to sign the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter the message you want to sign"),
QT_TRANSLATE_NOOP("PeopleBridge", "Click sign message to generate signature"),
QT_TRANSLATE_NOOP("PeopleBridge", "Copy the signed message signature"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a PeopleCash address to verify the message with (e.g. SaKYqfD8J3vw4RTnqtgk2K9B67CBaL3mhV)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter the message you want to verify"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a PeopleCash signature"),
QT_TRANSLATE_NOOP("PeopleBridge", "Paste signature from clipboard"),
QT_TRANSLATE_NOOP("PeopleBridge", "Your total balance"),
QT_TRANSLATE_NOOP("PeopleBridge", "Balances overview"),
QT_TRANSLATE_NOOP("PeopleBridge", "Recent in/out transactions or stakes"),
QT_TRANSLATE_NOOP("PeopleBridge", "Select inputs to spend"),
QT_TRANSLATE_NOOP("PeopleBridge", "Optional address to receive transaction change"),
QT_TRANSLATE_NOOP("PeopleBridge", "Choose from address book"),
QT_TRANSLATE_NOOP("PeopleBridge", "Paste address from clipboard"),
QT_TRANSLATE_NOOP("PeopleBridge", "Remove this recipient"),
QT_TRANSLATE_NOOP("PeopleBridge", "Current spendable send payment balance"),
QT_TRANSLATE_NOOP("PeopleBridge", "Current spendable balance to account"),
QT_TRANSLATE_NOOP("PeopleBridge", "The address to send the payment to"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a label for this address"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a short note to send with payment (max 24 characters)"),
QT_TRANSLATE_NOOP("PeopleBridge", "The address to transfer the balance to"),
QT_TRANSLATE_NOOP("PeopleBridge", "The label for this address"),
QT_TRANSLATE_NOOP("PeopleBridge", "Amount to transfer"),
QT_TRANSLATE_NOOP("PeopleBridge", "Send to multiple recipients at once"),
QT_TRANSLATE_NOOP("PeopleBridge", "Double click to edit"),
QT_TRANSLATE_NOOP("PeopleBridge", "Date and time that the transaction was received."),
QT_TRANSLATE_NOOP("PeopleBridge", "Transaction status. Hover over this field to show number of confirmations."),
QT_TRANSLATE_NOOP("PeopleBridge", "Type of transaction."),
QT_TRANSLATE_NOOP("PeopleBridge", "Destination address of transaction."),
QT_TRANSLATE_NOOP("PeopleBridge", "Short payment note."),
QT_TRANSLATE_NOOP("PeopleBridge", "Amount removed from or added to balance."),
QT_TRANSLATE_NOOP("PeopleBridge", "The address to send the payment to  (e.g. SXywGBZBowrppUwwNUo1GCRDTibzJi7g2M)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Choose address from address book"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a public key for the address above"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a label for this group"),
QT_TRANSLATE_NOOP("PeopleBridge", "Name for this Wallet"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter a password"),
QT_TRANSLATE_NOOP("PeopleBridge", "Would you like to create a bip44 path?"),
QT_TRANSLATE_NOOP("PeopleBridge", "Your recovery phrase (Keep this safe!)"),
QT_TRANSLATE_NOOP("PeopleBridge", "Wallet Name for recovered account"),
QT_TRANSLATE_NOOP("PeopleBridge", "Enter the password for the wallet you are trying to recover"),
QT_TRANSLATE_NOOP("PeopleBridge", "Is this a bip44 path?"),
    0 // Leave this here...
};
#endif // BRIDGETRANSLATIONS_H
