def josephus(n, k):
    # 1번부터 N번까지의 사람들을 리스트로 표현
    people = list(range(1, n+1))
    
    # 결과를 저장할 리스트
    result = []
    
    # 현재 위치 (0-indexed)
    index = 0
    
    # 모든 사람이 제거될 때까지 반복
    while people:
        # k번째 사람의 인덱스 계산 (원형이므로 모듈로 연산 사용)
        index = (index + k - 1) % len(people)
        
        # k번째 사람을 제거하고 결과에 추가
        result.append(people.pop(index))
    
    return result

# 입력 받기
n, k = map(int, input().split())

# 요세푸스 순열 계산
josephus_sequence = josephus(n, k)

# 출력 형식에 맞게 출력
print('<' + ', '.join(map(str, josephus_sequence)) + '>')