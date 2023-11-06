import { PrettyChatWindow } from 'react-chat-engine-pretty'

const ChatsPage = (props) => {
    return (
        <div style={{ height: '100vh' }}>
            <PrettyChatWindow
                projectId='047d4a68-e090-4f92-adb1-b6f36b8943f3'
                username={props.user.username}
                secret={props.user.username}
                style={{ height: '100%'}}
                />
        </div>)
}

export default ChatsPage;